/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKSessionDataReceiveHandler>, <GKSessionDelegate>, <GKSessionPrivateDelegate>, GKAutoPeerIDTable, GKList, GKSession, GKTable, NSString;

@interface GKSessionInternal : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    <GKSessionDataReceiveHandler> *_dataReceiveHandler;
    void *_dataReceiveHandlerContext;
    <GKSessionDelegate> *_delegate;
    } _delegateLock;
    NSString *_displayName;
    struct _DNSServiceRef_t { } *_dnsServiceConnection;
    struct _DNSServiceRef_t { } *_dnsServiceResolveConnection;
    BOOL _handleEventsRunning;
    BOOL _isBusy;
    BOOL _isPublishing;
    BOOL _isSearching;
    } _lock;
    NSInteger _mode;
    struct _DNSServiceRef_t { } *_oldService;
    GKAutoPeerIDTable *_peerIDTable;
    GKTable *_peerInfoTable;
    GKTable *_peerNameTable;
    GKList *_peersAvailable;
    GKList *_peersConnected;
    GKList *_peersForCleanup;
    GKList *_peersPendingIncomingInvitation;
    GKList *_peersPendingOutgoingInvitation;
    NSUInteger _pid;
    NSUInteger _port;
    <GKSessionPrivateDelegate> *_privateDelegate;
    NSInteger _sReset;
    struct _DNSServiceRef_t { } *_service;
    struct _DNSServiceRef_t { } *_serviceBrowser;
    GKSession *_session;
    BOOL _sessionStarted;
    BOOL _shutdown;
    BOOL _stopHandlingEvents;
    BOOL _wifiEnabled;
    struct OpaqueAGPSession { } *agpSessionRef;
    double disconnectTimeout;
    NSString *displayName;
    NSString *domain;
    NSUInteger maxPeers;
    NSString *serviceType;
    NSString *sessionID;
    struct OpaqueGCKSession { } *sessionRef;
}

@property OpaqueAGPSession *agpSessionRef;
@property <GKSessionDelegate> *delegate;
@property(readonly) NSString *displayName;
@property(retain) NSString *domain;
@property(readonly) NSString *peerID;
@property <GKSessionPrivateDelegate> *privateDelegate;
@property(retain) NSString *serviceType;
@property(readonly) NSString *sessionID;
@property OpaqueGCKSession *sessionRef;
@property(getter=isAvailable) BOOL available;
@property(getter=isBusy) BOOL busy;
@property id dataReceiveHandler;
@property double disconnectTimeout;
@property NSUInteger maxPeers;
@property NSUInteger port;
@property(readonly) NSInteger sessionMode;
@property BOOL wifiEnabled;

- (BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2;
- (struct OpaqueAGPSession { }*)agpSessionRef;
- (void)browse;
- (void)cancelConnectToPeer:(id)arg1;
- (BOOL)checkDNSConnection;
- (void)cleanupExAvailablePeers;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (id)createNSErrorFromGKSessionError:(NSInteger)arg1 description:(id)arg2 reason:(id)arg3;
- (id)createNSErrorFromHRESULT:(NSInteger)arg1 description:(id)arg2 reason:(id)arg3;
- (id)dataReceiveHandler;
- (void)dealloc;
- (id)delegate;
- (void)denyConnectionFromPeer:(id)arg1;
- (id)description;
- (void)didFindService:(const char *)arg1 fromIF:(const char *)arg2 withError:(NSInteger)arg3 moreComing:(BOOL)arg4;
- (void)didLookupHostname:(struct _DNSServiceRef_t { }*)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 address:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { NSUInteger x_4_1_1; } x4; BOOL x5[8]; }*)arg4 interface:(NSUInteger)arg5 withError:(NSInteger)arg6 moreComing:(BOOL)arg7;
- (void)didPublishWithError:(NSInteger)arg1;
- (void)didRemoveService:(const char *)arg1 fromIF:(const char *)arg2 withError:(NSInteger)arg3 moreComing:(BOOL)arg4;
- (void)didResolveService:(struct _DNSServiceRef_t { }*)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 port:(unsigned short)arg4 interface:(NSUInteger)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void*)arg7 withError:(NSInteger)arg8 moreComing:(BOOL)arg9;
- (void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char *)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void*)arg4 withError:(NSInteger)arg5 moreComing:(BOOL)arg6;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (double)disconnectTimeout;
- (id)displayName;
- (id)displayNameForPeer:(id)arg1;
- (id)domain;
- (BOOL)filterService:(const char *)arg1 withPID:(NSUInteger)arg2;
- (void)handleEvents;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(NSInteger)arg4;
- (BOOL)isAvailable;
- (BOOL)isBusy;
- (BOOL)isPeerBusy:(id)arg1;
- (BOOL)isShuttingDown;
- (void)lock;
- (NSUInteger)maxPeers;
- (BOOL)parseServiceName:(const char *)arg1 intoDisplayName:(id*)arg2 pid:(NSUInteger*)arg3 state:(id*)arg4;
- (id)peerID;
- (id)peersWithConnectionState:(NSInteger)arg1;
- (NSUInteger)port;
- (void)printDictionaries;
- (id)privateDelegate;
- (void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void*)arg3;
- (void)publish;
- (void)reset;
- (void)sendCallbacksToDelegate:(struct { NSInteger x1; char *x2; NSInteger x3; NSUInteger x4; }*)arg1 remotePeer:(NSUInteger)arg2;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(NSInteger)arg3 error:(id*)arg4;
- (BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(NSInteger)arg2 error:(id*)arg3;
- (id)serviceName;
- (id)serviceType;
- (id)sessionID;
- (NSInteger)sessionMode;
- (struct OpaqueGCKSession { }*)sessionRef;
- (void)setAgpSessionRef:(struct OpaqueAGPSession { }*)arg1;
- (void)setAvailable:(BOOL)arg1;
- (void)setBusy:(BOOL)arg1;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2;
- (void)setDataReceiveHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisconnectTimeout:(double)arg1;
- (void)setDisplayName:(id)arg1 forPeer:(NSUInteger)arg2;
- (void)setDomain:(id)arg1;
- (void)setMaxPeers:(NSUInteger)arg1;
- (void)setPort:(NSUInteger)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSessionRef:(struct OpaqueGCKSession { }*)arg1;
- (void)setWifiEnabled:(BOOL)arg1;
- (void)stopOldService;
- (void)stopResolvingAllPeers;
- (void)tellDelegate_connectionRequestToPeerFailed:(id)arg1;
- (void)tellDelegate_didConnectPeer:(id)arg1;
- (void)tellDelegate_didDisconnectPeer:(id)arg1;
- (void)tellDelegate_didReceiveData:(id)arg1;
- (void)tellDelegate_gotInvited:(id)arg1;
- (void)tellDelegate_isConnectingPeer:(id)arg1;
- (void)tellDelegate_peerDidBecomeAvailable:(id)arg1;
- (void)tellDelegate_peerDidBecomeBusy:(id)arg1;
- (void)tellDelegate_peerDidBecomeUnavailable:(id)arg1;
- (void)tellDelegate_sessionDidFailWithError:(id)arg1;
- (void)timeoutConnectToPeer:(id)arg1;
- (BOOL)tryConnectToPeer:(id)arg1;
- (void)unlock;
- (BOOL)wifiEnabled;

@end