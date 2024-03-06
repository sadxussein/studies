def cakes(recipe, available):
    ingredients = set(key for key in recipe.keys()).union(set(key for key in available.keys()))
    recipe.update({key: 0 for key in ingredients if key not in recipe.keys()})
    available.update({key: 0 for key in ingredients if key not in available.keys()})
    if any(value for value in available.values() if value == 0):
        return 0
    else:
        max_pies = float('inf')
        for key in recipe:
            try:
                curr_pies = available[key] // recipe[key]
                if curr_pies < max_pies:
                    max_pies = curr_pies
            except ZeroDivisionError:
                continue
        print(max_pies)


cakes({'flour': 500, 'sugar': 200, 'eggs': 1},
      {'flour': 1200, 'sugar': 1200, 'eggs': 5, 'milk': 200})
cakes({'apples': 3, 'flour': 300, 'sugar': 150, 'milk': 100, 'oil': 100},
      {'sugar': 500, 'flour': 2000, 'milk': 2000})