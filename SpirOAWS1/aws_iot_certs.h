#ifndef aws_iot_certs_h
#define aws_iot_certs_h


// AWS Root CA Certificate
const char AWS_ROOT_CA_CERT[] ="-----BEGIN CERTIFICATE-----\n" \
"MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n"\
"ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n"\
"b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n"\
"MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n"\
"b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n"\
"ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n"\
"9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n"\
"IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n"\
"VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n"\
"93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n"\
"jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n"\
"AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n"\
"A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n"\
"U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n"\
"N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n"\
"o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n"\
"5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n"\
"rqXRfboQnoZsG4q5WTP468SQvvG5\n"\
"-----END CERTIFICATE-----\n";


const char AWS_PRIVATE_KEY[] ="-----BEGIN RSA PRIVATE KEY-----\n" \
"MIIEogIBAAKCAQEAwsKe4UVPyzxLEqN2WgNUXo0ieeBIWSeAEacjDLApOb2d9YIq\n"\
"NY3QWZpQfVYYPujIHLwwWPcgP1dyD62OPR6Wxb+zjtGS1ILRA2wgI8MlphvIm750\n"\
"v2CQq3nr71+1Bfo+gr7f36eFlFZ117DZ3hnvSMU2Or4sCmKoQsPnscsKF1BzYpkm\n"\
"4GVFAVKP3J5ObLrGmjMUx+NqnXeVkoLtlSbm0+AE+L+IElY6jE4pv+V/+z22PHJM\n"\
"rwcozVdHTdftztwdHomLFhkY7kv5KoBGnobz/zULJTp90STyjF0qiEVLPTz5VvkC\n"\
"UkHy5/UvCQexkJz/xoXkrHfu6p1s7IzbtMvquQIDAQABAoIBAHd+laC9uBGIMr+C\n"\
"z5C2zkMc8PQ6KemZlLhABf847nJg5tPFQ0SMeDMhvRTJiCLBDFalGDzdk0mJy4/W\n"\
"+piBdhxqXC7aYu5EPR2Ob8HBcA4Uqeb02gi5pMmxCpNZ82Vxfn0Vw6Ij1I+I5NCr\n"\
"z2C4JNpPNdCg8cCFe5tLO5MYcl6OiFSadUC3pfuRBmCSMhRP0F56XUEt8E6gD8rB\n"\
"nvxywuT+uGxRBHHEdEJEQA5LX7ukXGZhRX3ajYZD1c7qG55Rig1ru8gkDPVKEdx5\n"\
"i1hO5Gq9qUAoaLZxnnhKN/jV/rtomYl7d0RIH9DDNHU+wcgHEGRZ1USEvA0K3zEG\n"\
"uMEJ3IkCgYEA+CwwGsnD0VB135jmSLrXbfiokNx4oWiifUr3AoO83doaRHmJ973L\n"\
"25jl+hv0LKkN8N3lM4FGwffSM/zR2CWVkjnyzthVybT2JZtS3potk8CHCUfaeORR\n"\
"XcVQPsvaxEki3PoTwwc8mYR9JPP242uoBy9ScA4WSAyoAR+9bG9WY9MCgYEAyOcq\n"\
"u2qZnde0Was/mcc3fspYnaS6UgvEARmVZ/ROzZO7QDQtJG/vwIh4ggh8vZXgHLOI\n"\
"yFqvw2/jTODYYcb8w6n3fKPVOxJTuxhuiZuklggxrkxYvjmn/WGGUSlcdbQy1SIT\n"\
"HrknXxzh7ugpK4L13BW3VdCgXyfEUhEmUHiq+8MCgYBZWD8xRbYzow3so7U0Nd/c\n"\
"/YpiLJ1ZLrxg8x4eT6MtE5olUMQ05qV/t3oEIxAzC+Gy94/OjRoWNsv8X2aEtHM2\n"\
"o5ogkY3BAl8jhtm8vjDuYn+6/Z1PrJMGeUS8dtOZmuLsPzPiILbWZfZP2Wzmzxk9\n"\
"DPJW2Rt4cOYDEZQ2d5bYdQKBgDcWO79cAXcoWElmDXBrEapwbU/8hSJOG5Z5n1/7\n"\
"u0ffRC7cn6woDUNrqC9viFSrreHw0IavZxZdraO821gkKda02imQ+rzRz6ezkUum\n"\
"I8EHyieSw5qVUJzHiv7iKnoTyQRr7XY1KriHwOOzQOavaB7KzZR4OiEdVFV0Yl8a\n"\
"VzflAoGAUwxnaIVCriptuB/1zclV9g3981jDK2KBasGM876RdXpRtAQ/sana3gCg\n"\
"iYhfY7OXS4jodZB6J91/07VP1xUo1XppvhJmITAo2Bni4ASR/aQP2KRgtcPoK/Nh\n"\
"fX7wXHVeTFHXb/kf4jnlRe35rCB460EB0QSKGwx9uaFbXkPReyI=\n"\
"-----END RSA PRIVATE KEY-----\n";


const char AWS_CLIENT_CERT[] ="-----BEGIN CERTIFICATE-----\n" \
"MIIDWTCCAkGgAwIBAgIUfOx3as3Tl31d5I+tIoo7Lz68XzMwDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIxMDkxODAwNDgz\n"\
"MFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMLCnuFFT8s8SxKjdloD\n"\
"VF6NInngSFkngBGnIwywKTm9nfWCKjWN0FmaUH1WGD7oyBy8MFj3ID9Xcg+tjj0e\n"\
"lsW/s47RktSC0QNsICPDJaYbyJu+dL9gkKt56+9ftQX6PoK+39+nhZRWddew2d4Z\n"\
"70jFNjq+LApiqELD57HLChdQc2KZJuBlRQFSj9yeTmy6xpozFMfjap13lZKC7ZUm\n"\
"5tPgBPi/iBJWOoxOKb/lf/s9tjxyTK8HKM1XR03X7c7cHR6JixYZGO5L+SqARp6G\n"\
"8/81CyU6fdEk8oxdKohFSz08+Vb5AlJB8uf1LwkHsZCc/8aF5Kx37uqdbOyM27TL\n"\
"6rkCAwEAAaNgMF4wHwYDVR0jBBgwFoAUZ30boBqNgvZWbNRvvAufnU9NciUwHQYD\n"\
"VR0OBBYEFD19m91mWuPqKzB5MAoako+8TNe7MAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAtbtPGwkRSMkNOwPD5pIILZRD/\n"\
"8dbcmAKPRkzY91khl1GLYRcYHQgHAtx7mmDE8r1EcJ24CKdt9lurelqkoW4ESQ69\n"\
"fvTw1gtR+gjKPHyHFJDWTYrs5hMt3cGGQLLPi7axY69RU9sdOxEKqI9uh+HHzIPY\n"\
"RZugJCr14HGuR9KwqkvTh8FCbgCBroa4Zo9d6KgJ59TafB+PXlM1fHlGM2YAUsXm\n"\
"uxi9KXA/wH84+rNt/bPkyC3ZIKUIx8h2XN/P4oKWwWdPyBTYsb7EHuWdWXDjRlpp\n"\
"i6GJvK3UI8dNPNTtj3pY20MrYHxfrVVNovIXXe65iws4BaKCwVsyfSIkZkFr\n"\
"-----END CERTIFICATE-----\n";

#endif
