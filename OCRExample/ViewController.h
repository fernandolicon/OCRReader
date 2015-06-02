//
//  ViewController.h
//  OCRExample
//
//  Created by Luis Fernando Mata on 30/5/15.
//  Copyright (c) 2015 LuisFernandoMataLicon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TesseractOCR/TesseractOCR.h>
#import <AVFoundation/AVFoundation.h>


@interface ViewController : UIViewController <G8TesseractDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>{
    G8Tesseract *tesseract;
    __weak IBOutlet UIImageView *photoTaken;
}

- (IBAction)takePhoto:(id)sender;
- (IBAction)recognizeLetters:(id)sender;


@end

