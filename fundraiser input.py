from time import sleep

def fundraiser_program():
    print("Hello everyone, my name is Tyler, and we are doing a very special fundraiser for the Walrus Preservation Committee!")

    sleep(1)
    print("If we can raise $10,000, 100 walruses will be given a new life in the Tulsa Public Zoo")

    sleep(1)
    print("If we can raise $20,000, a Walrus will receive a lifetime supply of fish!")

    sleep(1)
    print("If we can raise $50,000, a new habitat will be built for struggling walruses!")

    sleep(1)
    print("If we can raise $100,000, we will let a walrus run the entire country for a day")

    sleep(1)

    level1 = "100 walruses will be given a new life in the Tulsa Public Zoo!"
    level2 = "A Walrus will receive a lifetime supply of fish!"
    level3 = "A new habitat will be built for struggling walruses!"
    level4 = "We will let a walrus run the entire country for a day!"

    names = []
    amts = []

    for i in range(4):
        full_name = input("Enter first and last name (with a space in between): ")
        first_name = full_name.split()[0]
        names.append(first_name)

        amt = int(input("Enter amount: "))
        amts.append(amt)

    total_amt = sum(amts)

    minordonation   = min(amts)
    maxdonation = max(amts)

    min_index = amts.index(minordonation)
    max_index = amts.index(maxdonation)

    for i in range(4):
        print(f"Thank you, {names[i]}, for your gift of ${amts[i]}!")

    if total_amt >= 100000:
        print(level4)
    elif total_amt >= 50000:
        print(level3)
    elif total_amt >= 20000:
        print(level2)
    elif total_amt >= 10000:
        print(level1)
    else:
        print("However, we did not reach any of our goals :( ")

    print("We raised $", total_amt)

    print( "Our biggest donation was" ,maxdonation, "by", names[max_index])
    print( "Our smallest donor was" ,maxdonation, "by", names[min_index])

fundraiser_program()
