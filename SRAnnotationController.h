//
//  SRAnnotationController.h
//  OsiriX
//
//  Created by joris on 11/09/06.
//  Copyright 2006 OsiriX Team. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DCMView.h"
#import "ViewerController.h"

@class SRAnnotation;

@interface SRAnnotationController : NSWindowController {
	SRAnnotation *annotation;
	DCMView *view;
	ViewerController *viewer;
	IBOutlet NSMatrix *whichROIsMatrix;
}

- (id)initWithViewerController:(ViewerController*)aViewer;

- (void)beginSheet;
- (void)endSheet;
- (IBAction)endSheet:(id)sender;

- (BOOL)exportAllROIs;
- (BOOL)exportAllROIsForCurrentDCMPix;
- (BOOL)exportSelectedROI;

//- (void)writeResult;
//- (IBAction)export:(id)sender;

@end
