//
//  RecipeDetailViewController.h
//  RecipeBook
//
//  Created by Simon Ng on 17/6/12.
//  Copyright (c) 2012 Appcoda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipe.h"

@interface RecipeDetailViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *recipePhoto;
@property (strong, nonatomic) IBOutlet UILabel *prepTimeLabel;
@property (strong, nonatomic) IBOutlet UITextView *ingredientTextView;

@property (nonatomic, strong) Recipe *recipe;

@end
