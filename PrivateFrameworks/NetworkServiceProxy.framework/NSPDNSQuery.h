/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPDNSQuery : NSObject {
    NSString * _name;
    int  _recordClass;
    int  _recordType;
}

@property (readonly) NSString *name;
@property (readonly) int recordClass;
@property (readonly) int recordType;

- (void).cxx_destruct;
- (id)copyStateDictionary;
- (id)initWithName:(id)arg1 recordType:(int)arg2 recordClass:(int)arg3;
- (id)name;
- (int)recordClass;
- (int)recordType;

@end