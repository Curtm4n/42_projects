FROM debian:buster

RUN apt-get update && apt-get install -y \
	nginx \
	mariadb-server \
	php-fpm \
	php-mysql

#RUN mkdir -p /var/www/your_domain/html
#RUN chown -R $USER:$USER /var/www/your_domain/html
#RUN chmod -R 755 /var/www

COPY srcs/nginx/index.html /var/www/html/index.html
#COPY srcs/nginx/your_domain /etc/nginx/sites-available/your_domain
#COPY srcs/nginx/info.php /var/www/your_domain/info.php

#RUN ln -s /etc/nginx/sites-available/your_domain /etc/nginx/sites-enabled/

EXPOSE 80 443
#VOLUME //put database's files

COPY srcs/script/launch_commands.sh /launch_commands.sh

CMD sh launch_commands.sh && bash
