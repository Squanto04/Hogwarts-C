//
//  JLCharacter.h
//  Hogwarts-C
//
//  Created by Jordan Lamb on 10/8/19.
//  Copyright © 2019 Karl Pfister. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JLCharacter : NSObject

//name, house, bloodStatus, deathEater, role

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly, nullable) NSString *house;
@property (nonatomic, copy, readonly) NSString *bloodStatus;
@property (nonatomic, readonly) BOOL deathEater;
@property (nonatomic, copy, readonly) NSString *role;

/*
 - : Method Type
 (JLCharacter*) : Return Type
 initWith: External Method Name
 Name: External Parameter 1 Name
 (NSString *): Parameter 1 Type
 name: Parameter 1 Internal Name
 */

- (JLCharacter*)initWithName:(NSString *)name
                       house:(NSString *)house
                 bloodStatus:(NSString *)bloodStatus
                  deathEater:(BOOL)deathEater
                        role:(NSString *)role;

@end

@interface JLCharacter (JSONConvertable)

- (instancetype) initWithDictionary: (NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END
