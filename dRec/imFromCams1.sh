# TODO: Setup and add in the other two cameras to test this script
# Saves images from CAMNUM=3 cameras

curl "https://nexusapi.dropcam.com/get_image?width=1280&uuid=cde21e98584241a099655015d1eca590" -b cookies.txt -o 0.jpg
#curl "https://nexusapi.dropcam.com/get_image?width=1280&uuid=" -b cookies.txt -o 1.jpg
#curl "https://nexusapi.dropcam.com/get_image?width=1280&uuid=" -b cookies.txt -o 2.jpg
exit 0