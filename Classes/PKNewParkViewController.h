//
//  PKNewParkViewController.h
//  Parked
//
//  Created by Rhys Powell on 29/05/12.
//  Copyright (c) 2012 Rhys Powell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@class PKParkingDetails;

@interface PKNewParkViewController : UITableViewController <CLLocationManagerDelegate, UITableViewDataSource, UITableViewDelegate>

- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;
- (IBAction)toggleDuration:(UISwitch *)sender;

@property (strong, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) PKParkingDetails *parkingDetails;

@end
