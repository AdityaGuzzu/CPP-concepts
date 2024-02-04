from PIL import Image
import os

def resize_images_in_folder(input_folder, output_folder, new_size):
    # Ensure the output folder exists
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
        


    # Iterate through each file in the input folder
    for filename in os.listdir(input_folder):
        if filename.endswith(('.jpg', '.jpeg', '.png', '.gif')):
            input_path = os.path.join(input_folder, filename)
            output_path = os.path.join(output_folder, filename)

            # Open the image file
            img = Image.open(input_path)
           
            # Resize the image
            resized_img = img.resize(new_size)

            # Save the resized image
            resized_img.save(output_path)

# Example usage

input_folder_path = "C:/Datasets/Training_Set/Training_Set/1"
output_folder_path = "C:/Datasets/Training_Set/Training_Set/1_resized"
new_size = (224, 224)

    
resize_images_in_folder(input_folder_path, output_folder_path, new_size)
