//
//  TheAmazingAudioEngine.h
//  TheAmazingAudioEngine
//
//  Created by Pablo on 01/03/2018.
//  Copyright © 2018 A Tasty Pixel. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for TheAmazingAudioEngine.
FOUNDATION_EXPORT double TheAmazingAudioEngineVersionNumber;

//! Project version string for TheAmazingAudioEngine.
FOUNDATION_EXPORT const unsigned char TheAmazingAudioEngineVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <TheAmazingAudioEngine/PublicHeader.h>

#import <TheAmazingAudioEngine/AEAudioController.h>
#import <TheAmazingAudioEngine/AEAudioController+Audiobus.h>
#import <TheAmazingAudioEngine/AEAudioFileLoaderOperation.h>
#import <TheAmazingAudioEngine/AEAudioFilePlayer.h>
#import <TheAmazingAudioEngine/AEAudioFileWriter.h>
#import <TheAmazingAudioEngine/AEMemoryBufferPlayer.h>
#import <TheAmazingAudioEngine/AEBlockChannel.h>
#import <TheAmazingAudioEngine/AEBlockFilter.h>
#import <TheAmazingAudioEngine/AEBlockAudioReceiver.h>
#import <TheAmazingAudioEngine/AEAudioUnitChannel.h>
#import <TheAmazingAudioEngine/AEAudioUnitFilter.h>
#import <TheAmazingAudioEngine/AEFloatConverter.h>
#import <TheAmazingAudioEngine/AEBlockScheduler.h>
#import <TheAmazingAudioEngine/AEUtilities.h>
#import <TheAmazingAudioEngine/AEMessageQueue.h>
#import <TheAmazingAudioEngine/AEAudioBufferManager.h>

#import <TheAmazingAudioEngine/AEExpanderFilter.h>
#import <TheAmazingAudioEngine/AEMixerBuffer.h>
#import <TheAmazingAudioEngine/AELimiter.h>
#import <TheAmazingAudioEngine/AELimiterFilter.h>
#import <TheAmazingAudioEngine/AERecorder.h>
#import <TheAmazingAudioEngine/AEPlaythroughChannel.h>

#import <TheAmazingAudioEngine/AESequencerBeat.h>
#import <TheAmazingAudioEngine/AESequencerChannel.h>
#import <TheAmazingAudioEngine/AESequencerChannelSequence.h>

#import <TheAmazingAudioEngine/AEVarispeedFilter.h>
#import <TheAmazingAudioEngine/AENewTimePitchFilter.h>
#import <TheAmazingAudioEngine/AEDynamicsProcessorFilter.h>
#import <TheAmazingAudioEngine/AEReverbFilter.h>
#import <TheAmazingAudioEngine/AEDelayFilter.h>
#import <TheAmazingAudioEngine/AEParametricEqFilter.h>
#import <TheAmazingAudioEngine/AELowShelfFilter.h>
#import <TheAmazingAudioEngine/AELowPassFilter.h>
#import <TheAmazingAudioEngine/AEHighShelfFilter.h>
#import <TheAmazingAudioEngine/AEPeakLimiterFilter.h>
#import <TheAmazingAudioEngine/AEHighPassFilter.h>
#import <TheAmazingAudioEngine/AEDistortionFilter.h>
#import <TheAmazingAudioEngine/AEBandpassFilter.h>
