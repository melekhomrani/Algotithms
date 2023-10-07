FROM gcc

COPY . /.

WORKDIR /.

RUN gcc -o main main.c

CMD ["./main"]