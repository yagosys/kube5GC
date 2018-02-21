#!/bin/sh

docker-compose build
docker-compose -f docker-compose.yml -f docker-compose.test.yml run --rm test

TAG=artful docker-compose build
TAG=artful docker-compose -f docker-compose.yml -f docker-compose.test.yml run --rm test

docker rm $(docker ps -qa --no-trunc --filter "status=exited")
