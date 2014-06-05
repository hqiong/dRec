# TODO: Setup and add in the other two cameras to test this script
# TODO: Fix the hardcoded BASH_SCRIPT_DIR = /Users/hawaii/Code/dRec/dRec/;
# Saves images from CAMNUM=3 cameras

curl "https://nexusapi.dropcam.com/get_image?width=1280&uuid=849030f543684977b4447b5669f1b592" -b cookies.txt -o /Users/hawaii/Code/dRec/dRec/0.jpg &
curl "https://nexusapi.dropcam.com/get_image?width=1280&uuid=cde21e98584241a099655015d1eca590" -b cookies.txt -o /Users/hawaii/Code/dRec/dRec/1.jpg &
#curl "https://nexusapi.dropcam.com/get_image?width=1280&uuid=" -b cookies.txt -o /Users/hawaii/Code/dRec/dRec/2.jpg
wait
exit 0