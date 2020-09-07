# To build and run follow these steps:

Go to project root and run make. It should generate `./ImageTransform` binary.
`cd image-transform/ && make`

Execute binary, it will generate transformed images inside `./output`.
`./ImageTransform`

There should be four output .png files inside `./output`
out-grayscale.png
out-illinify.png
out-spotlight.png
out.watermark.png

To clean all the generated files run `make clean`.
