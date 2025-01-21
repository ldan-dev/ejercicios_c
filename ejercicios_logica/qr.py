import qrcode

# Data to be encoded in the QR code
data = "https://drive.google.com/drive/folders/1eG5HXuzQ3Uy80zjW_HRk3uoK34Nece5N?usp=sharing"

# Create a QR code instance
qr = qrcode.QRCode(
    version=1,
    box_size=10,
    border=2,
)

# Add data to the QR code
qr.add_data(data)
qr.make(fit=True)

# Create an image from the QR code instance
img = qr.make_image(fill='black', back_color='white')

# Save the image to a file
img.save("qr.png")