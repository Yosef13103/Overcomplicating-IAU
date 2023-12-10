DROP DATABASE IF EXISTS user;
CREATE DATABASE user;
use user;

CREATE TABLE users
(
	username varchar(20),
    password varchar(20)
);

INSERT INTO users
VALUES('Ali', '123');

INSERT INTO users
VALUES('Ahmed', 'abc');

INSERT INTO users
VALUES('Moha', 'abc123');
