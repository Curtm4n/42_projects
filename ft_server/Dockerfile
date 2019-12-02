FROM debian:buster

RUN apt-get update -y
RUN apt-get upgrade -y
RUN apt-get install gnupg -y
RUN apt-get install wget -y
RUN apt-get install nginx -y
#RUN wget https://dev.mysql.com/get/mysql-apt-config_0.8.13-1_all.deb
#RUN dpkg -i mysql-apt-config*
RUN apt-get install mariadb-server mariadb-client -y
RUN rm -rf /var/lib/mysql
RUN rm -rf /var/lib/apt/lists/*

ADD srcs/nginx/index.html /var/www/html/index.html

EXPOSE 80 443
VOLUME /srcs

CMD ["nginx", "-g", "daemon off;"]
