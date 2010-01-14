//
//  RootViewController.h
//  gMapsDataiPhone
//
//  Created by Bruno Conti on 09/07/09.
//  Copyright Bruno Conti 2009. All rights reserved.
//

@interface RootViewController : UITableViewController
    <UITableViewDelegate, UITableViewDataSource> {
		NSMutableArray	*appSections;
}

@property (nonatomic, retain) NSMutableArray *appSections;

@end
