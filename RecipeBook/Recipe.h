//
//  Recipe.h
//  RecipeBook
//
//  Created by andre trosky on 25/02/13.
//
//

#import <Foundation/Foundation.h>

@interface Recipe : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *prepTime;
@property (nonatomic, strong) NSString *imageFile;
@property (nonatomic, strong) NSArray *ingredients;


@end
