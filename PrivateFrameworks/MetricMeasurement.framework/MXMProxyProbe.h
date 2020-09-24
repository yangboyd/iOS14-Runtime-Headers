/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MXMProbe.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MXMProxyMetric;

@interface MXMProxyProbe : MXMProbe <NSSecureCoding> {

	MXMProxyMetric* _proxyMetric;

}

@property (readonly) MXMProxyMetric * proxyMetric;              //@synthesize proxyMetric=_proxyMetric - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProxyMetric:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateNowUntilStoppedWithUpdateHandler:(/*^block*/id)arg1 stopHandler:(/*^block*/id)arg2 ;
-(id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long*)arg2 ;
-(MXMProxyMetric *)proxyMetric;
@end
