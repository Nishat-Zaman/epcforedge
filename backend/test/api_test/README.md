# api_test

This is the CURL based test scripts for HTTPS API testing


## Overview

1/ Check whether installed CURL support SSL.
2/ To run test scripts, need copy pre-generated self-signed certificate file (mec.crt) from /etc/nginx/ss/ folder to here.
3/ If OAMAgent and CURL TestScripts will run on the same server, you will need to add hostname "mec.local" into /etc/hosts 127.0.0.1 entry
   If OAMAgent and CURL TestScripts will run on the different servers, you will need to add hostname "mec.local" into /etc/hosts on the CURL Test scripts Server. And the IP address should be OAMAgent's IPAddress
