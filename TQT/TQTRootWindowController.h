//
//  TQTRootWindowController.h
//  TQT
//
//  Created by lishunnian on 11-7-11.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TQTWeiBoTableViewController.h"
#import "TQTWeiboRequest.h"
@class TQTPostWeiboWindowController;
@interface TQTRootWindowController : NSWindowController {
@private
    IBOutlet NSImageView *userImgView_;
    IBOutlet NSView* tableView_;
    IBOutlet NSWindow *window_;
    TQTWeiBoTableViewController *tableViewController;
    TQTPostWeiboWindowController *postWindowController;
    TQTWeiboRequest *weiboRequest_;
}

@property (assign, readonly) NSImageView *userImgView;
@property (assign, readonly) NSView *tableView;
@property (retain) TQTWeiboRequest *weiboRequest;
- (IBAction)postWeibo:(id)sender;
- (void)reloadData;
@end
