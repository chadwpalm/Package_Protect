#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAKfsH5U4q7YILhTsV94ws6OzCbk/MA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTAzMTEwNDA2\n"\
"NDlaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQC2lwIWDN18coK27w5p\n"\
"qTrZ2VA0znGkQFw9Upz3oQplnqHfPZdUL47PmB0+JkCSEcfcNNCr5Wkd07ZcmCsu\n"\
"wMY7HNw8romSHO1/n7wL+7J5HHMLUOLrlt31kA1NUbn8nVfz6s3kmlQu+Kr601Gr\n"\
"RblGBH6bhgmKHLc09j/fZp7KAYdDRI2c2OZDG6rxLQ3JcbbgjBRSzPWIe103XaVs\n"\
"t8BqfcENvLKvSQwJdd5rhJyi8IKjxLfzY0eLBz/hQsDi3TuthaSzHMl9HQpPVsrq\n"\
"su/+3QUH2U5YfsFz5Wuzbw/e7hoHXg+5zccSXJGWBqPC/6Q0vk4VF0K5Zfchk6sJ\n"\
"drB1AgMBAAGjYDBeMB8GA1UdIwQYMBaAFBDmrgMyj+Hr4MZ8320WtLFrZCbBMB0G\n"\
"A1UdDgQWBBRCVMjBfGUNeOwJ6oXB5jpmoWmZFDAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAlMNImZ1U77H5n8G6POMcxBFU\n"\
"RwXomA2RVNpn4oNx4B2nrwvdDvAyCRJ7KxMRUHDHEkVs3+AE516/XaFQjsFSsAqc\n"\
"BlhoFCbsM941IXlgeu0pKQqysvGw7Z0BvqEBGpN+ChhajW1C3Fv9TXz4wBiawshu\n"\
"IyHd+LYUpijVCzk22ZWvzG3mwy/G5bfKOu5FarV+qQ6O+3GjtRDDLPscRYgopEB6\n"\
"4+f4/UaYfXrjqqCgvZeZkAvlJCTnkvtPj1vM/pzfV4vlReaZ6G161R5y0mewJZEF\n"\
"SgTHchLubktUDNwdkrCjuT+c3uYpjVzrlaBEpifpv2l7VkSJsfKJSw4r1oJJ0w==\n"\
"-----END CERTIFICATE-----"

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAtpcCFgzdfHKCtu8Oaak62dlQNM5xpEBcPVKc96EKZZ6h3z2X\n"\
"VC+Oz5gdPiZAkhHH3DTQq+VpHdO2XJgrLsDGOxzcPK6Jkhztf5+8C/uyeRxzC1Di\n"\
"65bd9ZANTVG5/J1X8+rN5JpULviq+tNRq0W5RgR+m4YJihy3NPY/32aeygGHQ0SN\n"\
"nNjmQxuq8S0NyXG24IwUUsz1iHtdN12lbLfAan3BDbyyr0kMCXXea4ScovCCo8S3\n"\
"82NHiwc/4ULA4t07rYWksxzJfR0KT1bK6rLv/t0FB9lOWH7Bc+Vrs28P3u4aB14P\n"\
"uc3HElyRlgajwv+kNL5OFRdCuWX3IZOrCXawdQIDAQABAoIBAGWI++P/K3t0wjOw\n"\
"JDeln9BdBDkZRCCumZyQQDGEIB/6YtGdknWCLMxMLpbM9sNDl/xgclnkrNulS5ea\n"\
"Fwlcsd9VYTNta5sQ8xExZoTTZp/qrh7wz/9qWeugO4VvmRlc9ffx7qTdHUsxhQMO\n"\
"WDACCdFh1nXtx4hCB68v8LzueAakenc93yq41cU6hUZ7ye8GdDadNRHiDnIxrZgD\n"\
"fgcUr/boBA7djlvA7YyG43Hc1A8yOCEZ+nI7iQZ+QoLSHP0fvR3Y/9W4qR1K1ISz\n"\
"DpfyKWZ2mBeRV5E79htndHsdDrj/jq3GjThmPfqwMiH8iNs/dEzRdvZBKNKbquw6\n"\
"5ua/qAECgYEA2pBH/xDpQLMU+UBkKGeKUDAEb54iaXUs4P5AyKX5qO3GLoFO6gJd\n"\
"soqDq1S9Y4Kb2IQeEsxcY2dCkrjNmL33rWEetcDlgSvbkWa2yChmOpWXOGsAu6Sv\n"\
"pr/VBjy7SHFvLLn1+a0EQJDjmb9NdrvZof4WtyJOYsKsVyBiu1ki8vUCgYEA1d1T\n"\
"5XMDZWaNNZM34Tt2l+jbLkBY1g4xH9p4rAlX9ms2VFHOJq6N1KOGyA8Mo7rE1guh\n"\
"ZNzrOE6JzeJu66Bo9Dn7q/9yUwl+fPx3E7yz7k4aHf9DS4MlkPGdltBLsQTtcDN9\n"\
"3nrLVccHFOBtLd9U4Q5ZkDT0UhldylIg3tGFV4ECgYEAzHrkAMxPjYp9+tu1WN/V\n"\
"1UO3Qr4Nr+BChpUZAx/VPaiHG4c6z1A7XQieOzLipTDSoXSptiif3xgCfsaLA3Xn\n"\
"PLx6QM0hawIfQB96rjStv+2oNs5VNzjSZQ1gPZ+gEBygSJYKfPbT3Zwwc+04ifch\n"\
"m57enaNo9pjvJ+xSsrioK+kCgYAs2NfSAtdQeTvdYzzRl3WcD3F+9nFqmdlFU7wA\n"\
"X4k5nGvtLKZtSCdn0s7dvwIoh27lb9TtYMJWsWmGahhWgvHfXRVgkRW5QgFrVknm\n"\
"MqkMrQYfCjtjZ2IGThR83rswqNbds36Om/Ntzmm2wAVFHFMhSrAPZHtjh/w6BBTu\n"\
"hMNQgQKBgQCdoGcDC4PhhBfvjQ59FQUiHzylJegQ9Tk1MvqA3kJxOlg+ElKfRnOS\n"\
"y5D4kePBv5nwCyHnOHJ+TsPGQyhYlS3ETWO2BeobaQHCRMk1Qj71qWdQGx9PH2TB\n"\
"1+Nd0yL+F+m94/VsSZhfBoAtam2jqptSFeAv9zthuzSHnnJBW4oQ+A==\n"\
"-----END RSA PRIVATE KEY-----"

/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/* The constants above are set to const char * pointers defined in aws_dev_mode_key_provisioning.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
