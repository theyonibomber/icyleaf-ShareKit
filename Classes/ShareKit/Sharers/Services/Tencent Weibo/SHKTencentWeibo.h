//
//  SHKTencentWeibo.h
//  ShareKit
//
//  Created by icyleaf on 12-5-3.
//  Copyright (c) 2012年 icyleaf.com. All rights reserved.
//

//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//


#import <Foundation/Foundation.h>
#import "SHKOAuthSharer.h"
#import "SHKFormControllerLargeTextField.h"

@interface SHKTencentWeibo : SHKOAuthSharer <SHKFormControllerLargeTextFieldDelegate> 

#pragma mark -
#pragma mark UI Implementation

- (void)showTencentWeiboForm;

#pragma mark -
#pragma mark Share API Methods

- (void)sendStatus;
- (void)sendStatusTicket:(OAServiceTicket *)ticket finishedWithData:(NSMutableData *)data;
- (void)sendStatusTicket:(OAServiceTicket *)ticket failedWithError:(NSError *)error;

- (void)sendImage;
- (void)sendImageTicket:(OAServiceTicket *)ticket finishedWithData:(NSMutableData *)data;
- (void)sendImageTicket:(OAServiceTicket *)ticket failedWithError:(NSError *)error;

- (void)sendUserInfo;
- (void)sendUserInfo:(OAServiceTicket *)ticket didFinishWithData:(NSData *)data;
- (void)sendUserInfo:(OAServiceTicket *)ticket didFailWithError:(NSError *)error;

@end
