FROM docker.io/library/ubuntu:latest

RUN apt-get update -y && apt-get upgrade -y
RUN apt-get install build-essential -y
ADD gcc-arm-none-eabi-9-2020-q2-update-x86_64-linux.tar.bz2  /usr/local/
RUN apt-get install fd-find -y
