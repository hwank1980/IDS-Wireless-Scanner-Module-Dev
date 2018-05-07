//
//  Network.h
//  wifi-sample
//
//

#ifndef Network_h
#define Network_h

#import <Foundation/Foundation.h>

@interface Network : NSObject

@property (nonatomic, retain) NSString *deviceIP;
@property (nonatomic, retain) NSString *netmask;
@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *broadcast;
@property (nonatomic, retain) NSArray *ipsInRange;

- (void)updateData;
- (NSString *)description;

@end

#endif /* Network_h */
