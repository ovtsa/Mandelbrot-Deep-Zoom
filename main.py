import subprocess

def build():
	print("Building project:")
	subprocess.run(["make", "-C", "./Mandelbrot/", "clean"])
	subprocess.run(["make", "-C", "./Mandelbrot/"])
	print("Build complete")

def convertPPMtoJPG(ppmPath, jpgPath):
	subprocess.run(["magick", "convert", ppmPath, jpgPath])

build()
