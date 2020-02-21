FROM debian:buster

RUN apt-get update && apt-get install -y \
	nginx \
	mariadb-server \
	php-fpm \
	php-mysql \
	php-mbstring \
	php-zip \
	php-gd \
	curl \
	wget

#Add script which find the link of the latest phpMyAdmin version
COPY srcs/script/php_my_admin_link /php_my_admin_link

#Run script, download phpmyadmin and then set it up
RUN sh php_my_admin_link
RUN	wget -i link
RUN	tar xvf phpMyAdmin*
RUN	rm php_my_admin_link link phpMyAdmin*.tar.gz
RUN	mv phpMyAdmin* /usr/share/phpmyadmin
RUN	mkdir -p /var/lib/phpmyadmin/tmp
RUN	chown -R www-data:www-data /var/lib/phpmyadmin

#Add the new configuration file
COPY srcs/phpmyadmin/config.inc.php /usr/share/phpmyadmin/config.inc.php

#Create the second domain
RUN mkdir /var/www/localhost

#Add my own index.html for my new domain
COPY srcs/nginx/index.html /var/www/localhost/index.html

#Add the second domain to the available sites and a php page
COPY srcs/nginx/localhost /etc/nginx/sites-available/localhost
COPY srcs/nginx/info.php /var/www/localhost/info.php

#Create a symbolic link of the new site inside sites-enabled
RUN ln -s /etc/nginx/sites-available/localhost /etc/nginx/sites-enabled/

#Expose the ports 80(HTTP) and 443(HTTPS/work with ssl)
EXPOSE 80 443
#VOLUME //put database's files

#Add my scripts inside the container
COPY srcs/script/launch_commands.sh /launch_commands.sh

#My main command run the script and open an interactive shell
CMD sh launch_commands.sh && bash
