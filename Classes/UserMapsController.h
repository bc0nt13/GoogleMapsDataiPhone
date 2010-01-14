//
//  UserMapsController.h
//  gMapsDataiPhone
//
//  Created by Bruno Conti on 18/07/09.
//  Copyright 2009 Bruno Conti. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UserMapsController : UITableViewController <UISearchBarDelegate>{
    NSMutableArray *mapsList;
	NSMutableDictionary *mapListDict;
    NSString *currentElement;
    //NSDictionary *currentElementAttributeDict;
    NSMutableString *publishElement;
    NSMutableString *updatedElement;
    NSMutableString *titleElement;
    NSMutableString *idElement;
    NSMutableString *contentElement;
    NSMutableString *editLinkElement;
    NSMutableString *nameAuthorElement;
    
    NSOperationQueue *operationQueue;
    
    UIActivityIndicatorView *spinner;
    UILabel *loadingLabel;
    
    NSString *userName;
    UISearchBar *mapSearchBar;
    NSMutableArray *searchArray;
}

@property (nonatomic, retain) NSString *userName;
-(void) parseMapListXMLFileData:(NSData *)XMLData;
@end
