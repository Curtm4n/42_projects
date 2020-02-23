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

#Create the second domain repository
RUN mkdir /var/www/localhost

#Add my own index.html for my new domain and a php page
COPY srcs/nginx/index.html /var/www/localhost/index.html
COPY srcs/nginx/info.php /var/www/localhost/info.php

#Add the second domain to the available sites
COPY srcs/nginx/localhost /etc/nginx/sites-available/localhost

#Add script which find the link of the latest phpMyAdmin version
COPY srcs/script/php_my_admin_link /php_my_admin_link

#Run script, download phpmyadmin and then set it up
RUN sh php_my_admin_link
RUN	wget -i link
RUN	tar xvf phpMyAdmin*
RUN	rm php_my_admin_link link phpMyAdmin*.tar.gz
RUN	mv phpMyAdmin* /var/www/localhost/phpmyadmin
RUN	mkdir /var/www/localhost/phpmyadmin/tmp
RUN chown -R www-data:www-data /var/www/localhost/phpmyadmin

#Add the new configurations file for phpmyadmin
COPY srcs/phpmyadmin/config.inc.php /var/www/localhost/phpmyadmin/config.inc.php

#Create a symbolic link for the new domain inside sites-enabled
RUN ln -s /etc/nginx/sites-available/localhost /etc/nginx/sites-enabled/

#Expose the ports 80(HTTP) and 443(HTTPS/work with ssl)
EXPOSE 80 443
#VOLUME //put database's files

#Add my launch script inside the container
COPY srcs/script/launch_commands.sh /launch_commands.sh

#Add my openssl infos and create the self-signed certificate
COPY srcs/openssl.txt /openssl.txt
RUN openssl req -x509 -nodes -days 365 -newkey rsa:2048 -keyout /etc/ssl/private/nginx-selfsigned.key -out /etc/ssl/certs/nginx-selfsigned.crt < openssl.txt

#Add config files for ssl key and certificate
COPY srcs/nginx/self-signed.conf /etc/nginx/snippets/self-signed.conf
COPY srcs/nginx/ssl-params.conf /etc/nginx/snippets/ssl-params.conf

#My main command run the script and open an interactive shell
CMD sh launch_commands.sh && bash
