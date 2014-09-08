opencv_createsamples -img ../data/positive_images/image_0001.jpg -num 600 -bg negatives.txt \
  -vec sample.vec -bgcolor 0 -bgthresh 0 -maxxangle 1.1 -maxyangle 1.1 -maxzangle 0.5 \
  -maxidev 40 -w 80 -h 40

