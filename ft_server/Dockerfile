FROM debian:buster

RUN apt-get update && apt-get install -y \
	nginx \
	mariadb-server \
	php-fpm \
	php-mysql

COPY srcs/nginx/index.html /var/www/html/index.html
COPY srcs/nginx/your_domain /etc/nginx/sites-available/your_domain

RUN mkdir /var/www/your_domain

COPY srcs/nginx/info.php /var/www/your_domain/info.php

RUN ln -s /etc/nginx/sites-available/your_domain /etc/nginx/sites-enabled/

#COPY srcs/script/launch_commands.sh

#ENTRYPOINT ["nginx", "-g", "daemon off;"]
EXPOSE 80 443
#VOLUME //put database's files

CMD ["nginx", "-g", "daemon off;"]
