FROM debian:buster

RUN apt-get update -y
RUN apt-get install nginx -y
#RUN apt-get install mariadb-server mariadb-client -y

ADD srcs/nginx/index.html /var/www/html/index.html

ENTRYPOINT ["bin/bash", "srcs/script/launch_commands.sh"]
ENTRYPOINT ["nginx", "-g", "daemon off;"]
EXPOSE 80 443
VOLUME /srcs

#CMD ["nginx", "-g", "daemon off;"]
