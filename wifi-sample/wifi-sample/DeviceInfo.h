//
//  DeviceInfo.h
//  wifi-sample
//
//

#ifndef DeviceInfo_h
#define DeviceInfo_h

@interface DeviceInfo : NSObject {

@private
    bool found;
    bool running;

@public
    NSString *firmwareVersion;
    NSString *serialNo;
    NSString *controlNo;
    NSString *host;
    NSString *nickname;
}

- (void)start;
- (void)stop;
- (bool)isRunning;
- (bool)isFound;

@end

#endif /* DeviceInfo_h */
