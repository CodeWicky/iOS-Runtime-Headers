/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaLibrary.framework/MediaLibrary
 */

@interface MLChangeRequest : NSObject {
    struct shared_ptr<mlcore::ChangeRequest> { 
        struct ChangeRequest {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _coreChangeRequest;
}

@property (nonatomic, readonly) struct shared_ptr<mlcore::ChangeRequest> { struct ChangeRequest {} *x1; struct __shared_weak_count {} *x2; } coreChangeRequest;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::ChangeRequest> { struct ChangeRequest {} *x1; struct __shared_weak_count {} *x2; })coreChangeRequest;
- (id)initWithCoreEntity:(struct shared_ptr<mlcore::ChangeRequest> { struct ChangeRequest {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end