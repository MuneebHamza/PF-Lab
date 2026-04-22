#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int toyindex = 11;

    // toy data in parallel arrays
    string toyid[1000] = {"101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111"};
    string toyname[1000] = {"LEGO-Castle", "Barbie-Doll", "RC-Car", "Puzzle-100", "Action-Hero", "Teddy-Bear", "Dinosaur-Set", "Play-Kitchen", "Nerf-Gun", "Chess-Board", "Rubik-Cube"};
    string category[1000] = {"Blocks", "Doll", "Vehicle", "Puzzle", "Action", "Plush", "Action", "Pretend", "Outdoor", "Board", "Puzzle"};
    string agegroup[1000] = {"5+", "3+", "8+", "6+", "5+", "0+", "4+", "3+", "8+", "10+", "7+"};
    float price[1000] = {1500, 1200, 2500, 800, 950, 600, 1100, 1800, 1350, 700, 450};
    int stock[1000] = {10, 4, 2, 15, 3, 20, 8, 6, 4, 12, 25};
    float rating[1000] = {4.5, 4.2, 3.8, 4.7, 4.0, 4.9, 4.3, 4.1, 3.9, 4.6, 4.8};
    int ratingcount[1000] = {10, 8, 5, 12, 6, 15, 7, 9, 4, 11, 20};
    string featured[1000] = {"Yes", "No", "No", "Yes", "No", "Yes", "No", "Yes", "No", "No", "Yes"};

    // user data
    int totalusers = 3;
    int userid[100] = {1, 2, 3};
    string username[100] = {"ahmed", "sara", "ali"};
    string membership[100] = {"Gold", "Silver", "None"};
    float totalspent[100] = {15000, 8000, 2000};

    // cart
    int carttoyindex[100];
    int cartquantity[100];
    int cartcount = 0;

    // purchase history
    int historyuserid[1000];
    string historytoyname[1000];
    float historyprice[1000];
    int historyquantity[1000];
    string historydate[1000];
    int historyindex = 5;

    historyuserid[0] = 1;
    historytoyname[0] = "LEGO-Castle";
    historyprice[0] = 1500;
    historyquantity[0] = 1;
    historydate[0] = "2025-06-10";

    historyuserid[1] = 1;
    historytoyname[1] = "RC-Car";
    historyprice[1] = 2500;
    historyquantity[1] = 2;
    historydate[1] = "2025-06-15";

    historyuserid[2] = 2;
    historytoyname[2] = "Barbie-Doll";
    historyprice[2] = 1200;
    historyquantity[2] = 1;
    historydate[2] = "2025-06-12";

    historyuserid[3] = 2;
    historytoyname[3] = "Teddy-Bear";
    historyprice[3] = 600;
    historyquantity[3] = 3;
    historydate[3] = "2025-06-18";

    historyuserid[4] = 3;
    historytoyname[4] = "Action-Hero";
    historyprice[4] = 950;
    historyquantity[4] = 1;
    historydate[4] = "2025-06-20";

    // discount coupons
    int totalcoupons = 3;
    string couponcode[50] = {"SAVE10", "WELCOME20", "TOY50"};
    float coupondiscount[50] = {10.0, 20.0, 50.0};
    string couponactive[50] = {"Yes", "Yes", "No"};

    // sales log
    string saledate[1000];
    float saleamount[1000];
    string saletoyname[1000];
    int salequantity[1000];
    int saleindex = 15;

    saledate[0] = "2025-06-10";
    saleamount[0] = 1500;
    saletoyname[0] = "LEGO-Castle";
    salequantity[0] = 1;

    saledate[1] = "2025-06-15";
    saleamount[1] = 5000;
    saletoyname[1] = "RC-Car";
    salequantity[1] = 2;

    saledate[2] = "2025-06-12";
    saleamount[2] = 1200;
    saletoyname[2] = "Barbie-Doll";
    salequantity[2] = 1;

    saledate[3] = "2025-06-18";
    saleamount[3] = 1800;
    saletoyname[3] = "Teddy-Bear";
    salequantity[3] = 3;

    saledate[4] = "2025-06-20";
    saleamount[4] = 950;
    saletoyname[4] = "Action-Hero";
    salequantity[4] = 1;

    saledate[5] = "2025-06-21";
    saleamount[5] = 900;
    saletoyname[5] = "Rubik-Cube";
    salequantity[5] = 2;

    saledate[6] = "2025-06-22";
    saleamount[6] = 1100;
    saletoyname[6] = "Dinosaur-Set";
    salequantity[6] = 1;

    saledate[7] = "2025-06-23";
    saleamount[7] = 1800;
    saletoyname[7] = "Play-Kitchen";
    salequantity[7] = 1;

    saledate[8] = "2025-06-25";
    saleamount[8] = 700;
    saletoyname[8] = "Chess-Board";
    salequantity[8] = 1;

    saledate[9] = "2025-06-26";
    saleamount[9] = 2700;
    saletoyname[9] = "Nerf-Gun";
    salequantity[9] = 2;

    saledate[10] = "2025-06-28";
    saleamount[10] = 1600;
    saletoyname[10] = "Puzzle-100";
    salequantity[10] = 2;

    saledate[11] = "2025-07-01";
    saleamount[11] = 3000;
    saletoyname[11] = "LEGO-Castle";
    salequantity[11] = 2;

    saledate[12] = "2025-07-02";
    saleamount[12] = 1200;
    saletoyname[12] = "Teddy-Bear";
    salequantity[12] = 2;

    saledate[13] = "2025-07-05";
    saleamount[13] = 2500;
    saletoyname[13] = "RC-Car";
    salequantity[13] = 1;

    saledate[14] = "2025-07-06";
    saleamount[14] = 1350;
    saletoyname[14] = "Nerf-Gun";
    salequantity[14] = 1;

    float totalRevenue = 0;
    for (int i = 0; i < saleindex; i++)
    {
        totalRevenue += saleamount[i];
    }

    // main
    while (true)
    {
        system("cls");
        cout << "========================================================" << endl;
        cout << "============  Toy Shop Management System  ==============" << endl;
        cout << "========================================================" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Customer" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose Option: ";
        string mainOption;
        cin >> mainOption;

        // admin menu
        if (mainOption == "1")
        {
            for (int attempt = 0; attempt < 3; attempt++)
            {
                system("cls");
                cout << "Admin Login : Attempt " << attempt + 1 << endl;
                cout << "Username: ";
                string uname;
                cin >> uname;
                cout << "Password: ";
                string upass;
                cin >> upass;

                if (uname == "admin" && upass == "123")
                {
                    cout << "Login Successful!" << endl;

                    while (true)
                    {
                        system("cls");
                        cout << "           ADMIN PANEL                " << endl;
                        cout<<endl;
                        cout << "1.  Add New Product" << endl;
                        cout << "2.  Update Product Details" << endl;
                        cout << "3.  Remove Product" << endl;
                        cout << "4.  Restock Inventory" << endl;
                        cout << "5.  View Low Stock Alerts (< 5)" << endl;
                        cout << "6.  Sort Inventory by Stock" << endl;
                        cout << "7.  View Total Sales History" << endl;
                        cout << "8.  Sort Sales by Revenue" << endl;
                        cout << "9.  Search Customer History" << endl;
                        cout << "10. Manage Discount Coupons" << endl;
                        cout << "11. User Management" << endl;
                        cout << "12. Generate Daily Report" << endl;
                        cout << "13. Reset Sales History" << endl;
                        cout << "14. Admin Dashboard" << endl;
                        cout << "15. Logout" << endl;
                        cout << "Choose Option: ";
                        string adminOption;
                        cin >> adminOption;

                        // add product
                        if (adminOption == "1")
                        {
                            system("cls");
                            cout << "--- Add New Product ---" << endl;
                            cout << "Enter Toy ID: ";
                            cin >> toyid[toyindex];
                            cout << "Enter Name: ";
                            cin >> toyname[toyindex];
                            cout << "Enter Category: ";
                            cin >> category[toyindex];
                            cout << "Enter Age Group: ";
                            cin >> agegroup[toyindex];
                            cout << "Enter Price: ";
                            cin >> price[toyindex];
                            cout << "Enter Stock: ";
                            cin >> stock[toyindex];
                            rating[toyindex] = 0;
                            ratingcount[toyindex] = 0;
                            featured[toyindex] = "No";
                            toyindex++;
                            cout << "Product added successfully!" << endl;
                        }
                        // update details
                        else if (adminOption == "2")
                        {
                            system("cls");
                            cout << "--- Update Product ---" << endl;
                            cout << "Enter Toy Name to update: ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIdx = -1;
                            for (int i = 0; i < toyindex; i++)
                            {
                                if (toyname[i] == searchName && toyname[i] != "")
                                {
                                    foundIdx = i;
                                    found = true;   
                                }
                            }
                            if (found == true)
                            {
                                cout << "Old Record = Name: " << toyname[foundIdx] << " | Category: " << category[foundIdx] << " | Price: " << price[foundIdx] << " | Stock: " << stock[foundIdx] << endl;
                                cout << "Enter new Name: ";
                                cin >> toyname[foundIdx];
                                cout << "Enter new Category: ";
                                cin >> category[foundIdx];
                                cout << "Enter new Age Group: ";
                                cin >> agegroup[foundIdx];
                                cout << "Enter new Price: ";
                                cin >> price[foundIdx];
                                cout << "Enter new Stock: ";
                                cin >> stock[foundIdx];
                                cout << "Updated successfully!" << endl;
                            }
                            else
                            {
                                cout << "Product not found." << endl;
                            }
                        }
                        // remove product
                        else if (adminOption == "3")
                        {
                            system("cls");
                            cout << "--- Remove Product ---" << endl;
                            cout << "Enter Toy Name to delete: ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIdx = -1;
                            for (int i = 0; i < toyindex; i++)
                            {
                                if (toyname[i] == searchName && toyname[i] != "")
                                {
                                    foundIdx = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                toyname[foundIdx] = "";
                                category[foundIdx] = "";
                                agegroup[foundIdx] = "";
                                price[foundIdx] = 0;
                                stock[foundIdx] = 0;
                                rating[foundIdx] = 0;
                                ratingcount[foundIdx] = 0;
                                featured[foundIdx] = "";
                                cout << searchName << " removed successfully!" << endl;
                            }
                            else
                            {
                                cout << "Product not found." << endl;
                            }
                        }
                        // restock
                        else if (adminOption == "4")
                        {
                            system("cls");
                            cout << "--- Restock Inventory ---" << endl;
                            cout << "Enter Toy Name to restock: ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIdx = -1;
                            for (int i = 0; i < toyindex; i++)
                            {
                                if (toyname[i] == searchName && toyname[i] != "")
                                {
                                    foundIdx = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "Current stock: " << stock[foundIdx] << endl;
                                cout << "Enter quantity to add: ";
                                int addquantity;
                                cin >> addquantity;
                                stock[foundIdx] += addquantity;
                                cout << "New stock: " << stock[foundIdx] << endl;
                            }
                            else
                            {
                                cout << "Product not found." << endl;
                            }
                        }
                        // low stock
                        else if (adminOption == "5")
                        {
                            system("cls");
                            cout << "--- Low Stock Alerts (stock < 5) ---" << endl;
                            cout << "Name \t Category \t Stock" << endl;
                            cout << "------------------------------------" << endl;
                            bool Found = false;
                            for (int i = 0; i < toyindex; i++)
                            {
                                if (toyname[i] != "" && stock[i] < 5)
                                {
                                    cout << toyname[i] << " \t " << category[i] << " \t " << stock[i] << endl;
                                    Found = true;
                                }
                            }
                            if (Found != true)
                            {
                                cout << "All items are well stocked!" << endl;
                            }
                        }
                        // sort inventory
                        else if (adminOption == "6")
                        {
                            system("cls");
                            // copy arrays so original order is not changed
                            string toyid2[1000];
                            string toyname2[1000];
                            string toycategory2[1000];
                            string toyagegroup2[1000];
                            float toyprice2[1000];
                            int toystock2[1000];
                            float toyrating2[1000];
                            string toyfeatured2[1000];

                            for (int i = 0; i < toyindex; i++)
                            {
                                toyid2[i] = toyid[i];
                                toyname2[i] = toyname[i];
                                toycategory2[i] = category[i];
                                toyagegroup2[i] = agegroup[i];
                                toyprice2[i] = price[i];
                                toystock2[i] = stock[i];
                                toyrating2[i] = rating[i];
                                toyfeatured2[i] = featured[i];
                            }

                            // ascending sort by stock
                            for (int i = 0; i < toyindex; i++)
                            {
                                for (int j = i + 1; j < toyindex; j++)
                                {
                                    if (toystock2[i] > toystock2[j])
                                    {
                                        string tempid = toyid2[i];
                                        toyid2[i] = toyid2[j];
                                        toyid2[j] = tempid;

                                        string tempname = toyname2[i];
                                        toyname2[i] = toyname2[j];
                                        toyname2[j] = tempname;

                                        string tempcat = toycategory2[i];
                                        toycategory2[i] = toycategory2[j];
                                        toycategory2[j] = tempcat;

                                        string tempage = toyagegroup2[i];
                                        toyagegroup2[i] = toyagegroup2[j];
                                        toyagegroup2[j] = tempage;

                                        float tempprice = toyprice2[i];
                                        toyprice2[i] = toyprice2[j];
                                        toyprice2[j] = tempprice;

                                        int tempstock = toystock2[i];
                                        toystock2[i] = toystock2[j];
                                        toystock2[j] = tempstock;

                                        float temprating = toyrating2[i];
                                        toyrating2[i] = toyrating2[j];
                                        toyrating2[j] = temprating;

                                        string tempfeat = toyfeatured2[i];
                                        toyfeatured2[i] = toyfeatured2[j];
                                        toyfeatured2[j] = tempfeat;
                                    }
                                }
                            }

                            cout << "--- Inventory Sorted by Stock (Low to High) ---" << endl;
                            cout << "Name \t Category \t Price \t Stock \t Rating" << endl;
                            cout << "-----------------------------------------------" << endl;
                            for (int i = 0; i < toyindex; i++)
                            {
                                if (toyname2[i] != "")
                                    cout << toyname2[i] << " \t " << toycategory2[i] << " \t " << toyprice2[i] << " \t " << toystock2[i] << " \t " << toyrating2[i] << endl;
                            }
                        }
                        // sales history
                        else if (adminOption == "7")
                        {
                            system("cls");
                            cout << "--- Total Sales History ---" << endl;
                            cout << "Date \t Toy \t Qty \t Amount" << endl;
                            cout << "----------------------------------------------" << endl;
                            for (int i = 0; i < saleindex; i++)
                            {
                                cout << saledate[i] << " \t " << saletoyname[i] << " \t " << salequantity[i] << " \t " << saleamount[i] << endl;
                            }
                            cout << endl
                                 << "Total Revenue: Rs." << totalRevenue << endl;
                        }
                        // sort sales
                        else if (adminOption == "8")
                        {
                            system("cls");
                            // copy sales arrays
                            string saledates2[1000];
                            float saleamounts2[1000];
                            string saletoys2[1000];
                            int salequantities2[1000];
                            for (int i = 0; i < saleindex; i++)
                            {
                                saledates2[i] = saledate[i];
                                saleamounts2[i] = saleamount[i];
                                saletoys2[i] = saletoyname[i];
                                salequantities2[i] = salequantity[i];
                            }

                            // descending by amount
                            for (int i = 0; i < saleindex; i++)
                            {
                                for (int j = i + 1; j < saleindex; j++)
                                {
                                    if (saleamounts2[i] < saleamounts2[j])
                                    {
                                        float tempamount = saleamounts2[i];
                                        saleamounts2[i] = saleamounts2[j];
                                        saleamounts2[j] = tempamount;

                                        int tempQTY = salequantities2[i];
                                        salequantities2[i] = salequantities2[j];
                                        salequantities2[j] = tempQTY;

                                        string tempdate = saledates2[i];
                                        saledates2[i] = saledates2[j];
                                        saledates2[j] = tempdate;

                                        string tempToy = saletoys2[i];
                                        saletoys2[i] = saletoys2[j];
                                        saletoys2[j] = tempToy;
                                    }
                                }
                            }

                            cout << "--- Sales Sorted by Revenue (High to Low) ---" << endl;
                            cout << "Date \t Toy \t Qty \t Amount" << endl;
                            cout << "----------------------------------------------" << endl;
                            for (int i = 0; i < saleindex; i++)
                            {
                                cout << saledates2[i] << " \t " << saletoys2[i] << " \t " << salequantities2[i] << " \t " << saleamounts2[i] << endl;
                            }
                        }
                        // customer history
                        else if (adminOption == "9")
                        {
                            system("cls");
                            cout << "--- Search Customer History ---" << endl;
                            cout << "Enter customer name: ";
                            string customername;
                            cin >> customername;
                            int coustomerid = -1;
                            for (int i = 0; i < totalusers; i++)
                            {
                                if (username[i] == customername)
                                {
                                    coustomerid = userid[i];
                                    break;
                                }
                            }
                            if (coustomerid == -1)
                            {
                                cout << "Customer not found." << endl;
                            }
                            else
                            {
                                cout << "Purchase history for " << customername << ":" << endl;
                                cout << "Date \t Toy \t Qty \t Amount" << endl;
                                cout << "----------------------------------------------" << endl;
                                bool History = false;
                                for (int i = 0; i < historyindex; i++)
                                {
                                    if (historyuserid[i] == coustomerid)
                                    {
                                        cout << historydate[i] << " \t " << historytoyname[i] << " \t " << historyquantity[i] << " \t " << historyprice[i] * historyquantity[i] << endl;
                                        History = true;
                                    }
                                }
                                if (History != true)
                                {
                                    cout << "No purchase history found." << endl;
                                }
                            }
                        }
                        // discounts
                        else if (adminOption == "10")
                        {
                            system("cls");
                            cout << "--- Manage Discount Coupons ---" << endl;
                            cout << "Code \t Discount% \t Active" << endl;
                            cout << "--------------------------------------" << endl;
                            for (int i = 0; i < totalcoupons; i++)
                            {
                                cout << couponcode[i] << " \t " << coupondiscount[i] << "% \t " << couponactive[i] << endl;
                            }
                            cout << endl
                                 << "1. Add Coupon" << endl
                                 << "2. Expire Coupon" << endl
                                 << "3. Exit" << endl;
                            cout << "Choose: ";
                            string couponOption;
                            cin >> couponOption;
                            if (couponOption == "1")
                            {
                                cout << "Enter code: ";
                                cin >> couponcode[totalcoupons];
                                cout << "Enter discount %: ";
                                cin >> coupondiscount[totalcoupons];
                                couponactive[totalcoupons] = "Yes";
                                totalcoupons++;
                                cout << "Coupon added!" << endl;
                            }
                            else if (couponOption == "2")
                            {
                                cout << "Enter coupon code to expire: ";
                                string expire;
                                cin >> expire;
                                bool found = false;
                                for (int i = 0; i < totalcoupons; i++)
                                {
                                    if (couponcode[i] == expire)
                                    {
                                        couponactive[i] = "No";
                                        cout << "Coupon expired." << endl;
                                        found = true;
                                        break;
                                    }
                                }
                                if (found != true)
                                    cout << "Coupon not found." << endl;
                            }
                            else if (couponOption == "3")
                            {
                                cout << "Returning..." << endl;
                            }
                            else
                            {
                                cout << "Invalid option." << endl;
                            }
                        }
                        // user list
                        else if (adminOption == "11")
                        {
                            system("cls");
                            cout << "--- All Registered Users ---" << endl;
                            cout << "ID \t Name \t Membership \t Total Spent" << endl;
                            cout << "----------------------------------------------" << endl;
                            for (int i = 0; i < totalusers; i++)
                            {
                                cout << userid[i] << " \t " << username[i] << " \t " << membership[i] << " \t " << totalspent[i] << endl;
                            }
                        }
                        // daily report
                        else if (adminOption == "12")
                        {
                            system("cls");
                            cout << "--- Daily Report ---" << endl;
                            cout << "Enter date (YYYY-MM-DD): ";
                            string reportdate;
                            cin >> reportdate;
                            float dayTotal = 0;
                            int dayToys = 0;
                            for (int i = 0; i < saleindex; i++)
                            {
                                if (saledate[i] == reportdate)
                                {
                                    dayTotal += saleamount[i];
                                    dayToys += salequantity[i];
                                }
                            }
                            cout << endl
                                 << "Date: " << reportdate << endl;
                            cout << "Toys Sold: " << dayToys << endl;
                            cout << "Revenue: Rs." << dayTotal << endl;
                            if (dayToys == 0)
                            {
                                cout << "(No sales recorded on this date)" << endl;
                            }
                        }
                        // reset history
                        else if (adminOption == "13")
                        {
                            system("cls");
                            cout << "Are you sure you want to reset ALL sales history? (yes/no): ";
                            string confirm;
                            cin >> confirm;
                            if (confirm == "yes")
                            {
                                saleindex = 0;
                                historyindex = 0;
                                totalRevenue = 0;
                                cout << "All sales history has been cleared." << endl;
                            }
                            else
                            {
                                cout << "Reset cancelled." << endl;
                            }
                        }
                        // admin dashboard
                        else if (adminOption == "14")
                        {
                            system("cls");
                            int activeproducts = 0;
                            for (int i = 0; i < toyindex; i++)
                                if (toyname[i] != "")
                                    activeproducts++;

                            int lowStockCount = 0;
                            for (int i = 0; i < toyindex; i++)
                                if (toyname[i] != "" && stock[i] < 5)
                                    lowStockCount++;

                            int activeCoupons = 0;
                            for (int i = 0; i < totalcoupons; i++)
                                if (couponactive[i] == "Yes")
                                    activeCoupons++;

                            cout << "           ADMIN DASHBOARD                  " << endl;
                            cout << endl;
                            cout << "Total Products: " << activeproducts << endl;
                            cout << "Total Users: " << totalusers << endl;
                            cout << "Total Revenue: Rs." << totalRevenue << endl;
                            cout << "Total Sales: " << saleindex << endl;
                            cout << "Low Stock Items: " << lowStockCount << endl;
                            cout << "Active Coupons: " << activeCoupons << endl;
                        }
                        // logout
                        else if (adminOption == "15")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected." << endl;
                        }

                        cout << endl
                             << "Press any key to continue...";
                        getch();
                    }

                    cout << "Logged out. Press any key...";
                    getch();
                    break;
                }
                else
                {
                    if (attempt < 2)
                    {
                        cout << "Invalid username or password." << endl;
                        cout << "Press any key to continue...";
                        getch();
                    }
                    else
                    {
                        cout << "3 failed attempts. Access denied." << endl;
                        cout << "Press Any key to continue..." << endl;
                        getch();
                    }
                }
            }
        }

        // coustomer menu
        else if (mainOption == "2")
        {
            system("cls");
            cout << "=== Customer Login ===" << endl;
            cout << "Enter your name: ";
            string cname;
            cin >> cname;

            // search for name in user array
            int registereduser = -1;
            for (int i = 0; i < totalusers; i++)
            {
                if (username[i] == cname)
                {
                    registereduser = i;
                    break;
                }
            }

            // if name is not present, make a new coustomer
            if (registereduser == -1)
            {
                cout << "Name not found. Register as new customer? (yes/no): ";
                string reg;
                cin >> reg;
                if (reg == "yes")
                {
                    userid[totalusers] = totalusers + 1;
                    username[totalusers] = cname;
                    membership[totalusers] = "None";
                    totalspent[totalusers] = 0;
                    registereduser = totalusers;
                    totalusers++;
                    cout << "Account created! Welcome, " << cname << "!" << endl;
                    cout << "Press Any key to continue..." << endl;
                    getch();
                }
                else
                {
                    cout << "Press any key to return...";
                    getch();
                    continue;
                }
            }

            cout << "Welcome, " << username[registereduser] << "! Membership: " << membership[registereduser] << endl;
            cout << "Press Any key to continue..." << endl;
            getch();

            cartcount = 0;               // reset cart for this session
            float appliedcoupondisc = 0; // for storing coupon for this session

            while (true)
            {
                system("cls");
                cout << "  CUSTOMER MENU - " << username[registereduser] << endl;
                cout << endl;
                cout << "1.  View All Products" << endl;
                cout << "2.  Search by Name" << endl;
                cout << "3.  Sort by Price (Ascending)" << endl;
                cout << "4.  Sort by Price (Descending)" << endl;
                cout << "5.  Filter by Category" << endl;
                cout << "6.  Check Stock Availability" << endl;
                cout << "7.  Add to Cart" << endl;
                cout << "8.  View / Remove from Cart" << endl;
                cout << "9.  Calculate Total Bill" << endl;
                cout << "10. View My Purchase History" << endl;
                cout << "11. Apply Discount Code" << endl;
                cout << "12. Rate a Product" << endl;
                cout << "13. View Featured Toys" << endl;
                cout << "14. Membership Status" << endl;
                cout << "15. Checkout" << endl;
                cout << "16. Logout" << endl;
                cout << "Choose Option: ";
                string customeroption;
                cin >> customeroption;

                // all products
                if (customeroption == "1")
                {
                    system("cls");
                    cout << "--- All Products ---" << endl;
                    cout << "ID \t Name \t Category \t Age \t Price \t Stock \t Rating" << endl;
                    cout << "----------------------------------------------------------------------" << endl;
                    for (int i = 0; i < toyindex; i++)
                    {
                        if (toyname[i] != "")
                            cout << toyid[i] << " \t " << toyname[i] << " \t " << category[i] << " \t "
                                 << agegroup[i] << " \t " << price[i] << " \t " << stock[i] << " \t " << rating[i] << endl;
                    }
                }
                // search by name
                else if (customeroption == "2")
                {
                    system("cls");
                    cout << "Enter toy name to search: ";
                    string searchname;
                    cin >> searchname;
                    bool found = false;
                    for (int i = 0; i < toyindex; i++)
                    {
                        if (toyname[i] == searchname && toyname[i] != "")
                        {
                            cout << endl
                                 << "Found!" << endl;
                            cout << "Name: " << toyname[i] << " | Category: " << category[i]
                                 << " | Age: " << agegroup[i] << " | Price: Rs." << price[i]
                                 << " | Stock: " << stock[i] << " | Rating: " << rating[i] << endl;
                            found = true;
                        }
                    }
                    if (found != true)
                        cout << "Toy not found." << endl;
                }
                // sort ascending price
                else if (customeroption == "3")
                {
                    system("cls");
                    // copy arrays
                    string Name2[1000];
                    string Category2[1000];
                    float Price2[1000];
                    int Stock2[1000];
                    float Rating2[1000];
                    for (int i = 0; i < toyindex; i++)
                    {
                        Name2[i] = toyname[i];
                        Category2[i] = category[i];
                        Price2[i] = price[i];
                        Stock2[i] = stock[i];
                        Rating2[i] = rating[i];
                    }
                    // bubble sort ascending
                    for (int i = 0; i < toyindex; i++)
                    {
                        for (int j = i + 1; j < toyindex; j++)
                        {
                            if (Price2[i] > Price2[j])
                            {
                                float tempprice = Price2[i];
                                Price2[i] = Price2[j];
                                Price2[j] = tempprice;

                                float temprating = Rating2[i];
                                Rating2[i] = Rating2[j];
                                Rating2[j] = temprating;

                                int tempstock = Stock2[i];
                                Stock2[i] = Stock2[j];
                                Stock2[j] = tempstock;

                                string tempname = Name2[i];
                                Name2[i] = Name2[j];
                                Name2[j] = tempname;

                                string tempcat = Category2[i];
                                Category2[i] = Category2[j];
                                Category2[j] = tempcat;
                            }
                        }
                    }
                    cout << "--- Products: Price Low to High ---" << endl;
                    cout << "Name \t Category \t Price \t Stock \t Rating" << endl;
                    cout << "----------------------------------------------" << endl;
                    for (int i = 0; i < toyindex; i++)
                        if (Name2[i] != "")
                            cout << Name2[i] << " \t " << Category2[i] << " \t " << Price2[i] << " \t " << Stock2[i] << " \t " << Rating2[i] << endl;
                }
                // sort descending price
                else if (customeroption == "4")
                {
                    system("cls");
                    // copy arrays
                    string Name3[1000];
                    string Category3[1000];
                    float Price3[1000];
                    int Stock3[1000];
                    float Rating3[1000];
                    for (int i = 0; i < toyindex; i++)
                    {
                        Name3[i] = toyname[i];
                        Category3[i] = category[i];
                        Price3[i] = price[i];
                        Stock3[i] = stock[i];
                        Rating3[i] = rating[i];
                    }
                    // bubble sort descending
                    for (int i = 0; i < toyindex; i++)
                    {
                        for (int j = i + 1; j < toyindex; j++)
                        {
                            if (Price3[i] < Price3[j])
                            {
                                float tempprice = Price3[i];
                                Price3[i] = Price3[j];
                                Price3[j] = tempprice;

                                float temprating = Rating3[i];
                                Rating3[i] = Rating3[j];
                                Rating3[j] = temprating;

                                int tempstock = Stock3[i];
                                Stock3[i] = Stock3[j];
                                Stock3[j] = tempstock;

                                string tempname = Name3[i];
                                Name3[i] = Name3[j];
                                Name3[j] = tempname;

                                string tempcat = Category3[i];
                                Category3[i] = Category3[j];
                                Category3[j] = tempcat;
                            }
                        }
                    }
                    cout << "--- Products: Price High to Low ---" << endl;
                    cout << "Name \t Category \t Price \t Stock \t Rating" << endl;
                    cout << "----------------------------------------------" << endl;
                    for (int i = 0; i < toyindex; i++)
                        if (Name3[i] != "")
                            cout << Name3[i] << " \t " << Category3[i] << " \t " << Price3[i] << " \t " << Stock3[i] << " \t " << Rating3[i] << endl;
                }
                // filter by category
                else if (customeroption== "5")
                {
                    system("cls");
                    cout << "Categories: Blocks, Doll, Vehicle, Puzzle, Action, Plush, Pretend, Outdoor, Board" << endl;
                    cout << "Enter category: ";
                    string filterCat;
                    cin >> filterCat;
                    cout << endl
                         << "Name \t Age \t Price \t Stock \t Rating" << endl;
                    cout << "----------------------------------------------" << endl;
                    bool any = false;
                    for (int i = 0; i < toyindex; i++)
                    {
                        if (toyname[i] != "" && category[i] == filterCat)
                        {
                            cout << toyname[i] << " \t " << agegroup[i] << " \t " << price[i] << " \t " << stock[i] << " \t " << rating[i] << endl;
                            any = true;
                        }
                    }
                    if (any != true)
                        cout << "No toys found in this category." << endl;
                }
                // check stock
                else if (customeroption == "6")
                {
                    system("cls");
                    cout << "Enter toy name: ";
                    string sname;
                    cin >> sname;
                    bool found = false;
                    for (int i = 0; i < toyindex; i++)
                    {
                        if (toyname[i] == sname && toyname[i] != "")
                        {
                            if (stock[i] > 0)
                                cout << toyname[i] << " is in stock. Available: " << stock[i] << " units." << endl;
                            else
                                cout << toyname[i] << " is out of stock." << endl;
                            found = true;
                        }
                    }
                    if (found != true)
                        cout << "Toy not found." << endl;
                }
                // add to cart
                else if (customeroption == "7")
                {
                    system("cls");
                    cout << "Enter toy name to add to cart: ";
                    string sname;
                    cin >> sname;
                    bool found = false;
                    int foundIdx = -1;
                    for (int i = 0; i < toyindex; i++)
                    {
                        if (toyname[i] == sname && toyname[i] != "")
                        {
                            foundIdx = i;
                            found = true;
                            break;
                        }
                    }

                    if (found != true)
                    {
                        cout << "Toy not found." << endl;
                    }
                    else if (stock[foundIdx] == 0)
                    {
                        cout << "Sorry, this toy is out of stock." << endl;
                    }
                    else
                    {
                        cout << "Price: Rs." << price[foundIdx] << " | Stock available: " << stock[foundIdx] << endl;
                        cout << "Enter quantity: ";
                        int quantity;
                        cin >> quantity;

                        if (quantity <= 0)
                        {
                            cout << "Invalid quantity." << endl;
                        }
                        else if (quantity > stock[foundIdx])
                        {
                            cout << "Not enough stock. Max available: " << stock[foundIdx] << endl;
                        }
                        else // Only proceed if stock is actually available
                        {
                            bool already = false;
                            for (int i = 0; i < cartcount; i++)
                            {
                                if (carttoyindex[i] == foundIdx)
                                {
                                    // Also check if existing cart qty + new qty exceeds stock
                                    if (cartquantity[i] + quantity > stock[foundIdx])
                                    {
                                        cout << "Total in cart would exceed stock!" << endl;
                                    }
                                    else
                                    {
                                        cartquantity[i] += quantity;
                                        cout << "Updated cart quantity!" << endl;
                                    }
                                    already = true;
                                    break;
                                }
                            }
                            if (already!=true)
                            {
                                carttoyindex[cartcount] = foundIdx;
                                cartquantity[cartcount] = quantity;
                                cartcount++;
                                cout << quantity << "x " << toyname[foundIdx] << " added to cart!" << endl;
                            }
                        }
                    }
                }

                // view / remove from cart
                else if (customeroption == "8")
                {
                    system("cls");
                    if (cartcount == 0)
                    {
                        cout << "Your cart is empty." << endl;
                    }
                    else
                    {
                        cout << "--- Your Cart ---" << endl;
                        cout << "No. \t Name \t Qty \t Price \t Subtotal" << endl;
                        cout << "----------------------------------------------" << endl;
                        float cartTotal = 0;
                        for (int i = 0; i < cartcount; i++)
                        {
                            int idx = carttoyindex[i];
                            float sub = price[idx] * cartquantity[i];
                            cartTotal += sub;
                            cout << i + 1 << " \t " << toyname[idx] << " \t " << cartquantity[i] << " \t " << price[idx] << " \t " << sub << endl;
                        }
                        cout << endl
                             << "Cart Total: Rs." << cartTotal << endl;
                        cout << endl
                             << "Enter item number to remove (0 to keep all): ";
                        int removeNum;
                        cin >> removeNum;
                        if (removeNum > 0 && removeNum <= cartcount)
                        {
                            for (int i = removeNum - 1; i < cartcount - 1; i++)
                            {
                                carttoyindex[i] = carttoyindex[i + 1];
                                cartquantity[i] = cartquantity[i + 1];
                            }
                            cartcount--;
                            cout << "Item removed from cart." << endl;
                        }
                    }
                }
                // total bill
                else if (customeroption == "9")
                {
                    system("cls");
                    if (cartcount == 0)
                    {
                        cout << "Your cart is empty." << endl;
                    }
                    else
                    {
                        float subtotal = 0;
                        for (int i = 0; i < cartcount; i++)
                            subtotal += price[carttoyindex[i]] * cartquantity[i];

                        // 1. Membership Discount
                        float memberDisc = 0;
                        if (membership[registereduser] == "Gold")
                            memberDisc = subtotal * 0.10;
                        else if (membership[registereduser] == "Silver")
                            memberDisc = subtotal * 0.05;

                        // 2. Coupon Discount
                        float coupondiscamount = (subtotal - memberDisc) * (appliedcoupondisc / 100.0);

                        // 3. Final
                        float afteralldiscounts = subtotal - memberDisc - coupondiscamount;
                        float tax = afteralldiscounts * 0.05;
                        float grandTotal = afteralldiscounts + tax;

                        // Display updated summary
                        cout << "Subtotal: Rs." << subtotal << endl;
                        cout << "Membership Discount: Rs." << memberDisc << endl;
                        if (appliedcoupondisc > 0)
                            cout << "Coupon Discount (" << appliedcoupondisc << "%): Rs." << coupondiscamount << endl;
                        cout << "Tax (5%): Rs." << tax << endl;
                        cout << "Grand Total: Rs." << grandTotal << endl;
                    }
                }
                // purchase history
                else if (customeroption == "10")
                {
                    system("cls");
                    int cid = userid[registereduser];
                    cout << "--- Purchase History for " << username[registereduser] << " (Last 10) ---" << endl;
                    cout << "Date \t Toy \t Qty \t Amount" << endl;
                    cout << "----------------------------------------------" << endl;
                    int shown = 0;
                    for (int i = historyindex - 1; i >= 0 && shown < 10; i--)
                    {
                        if (historyuserid[i] == cid)
                        {
                            cout << historydate[i] << " \t " << historytoyname[i] << " \t "
                                 << historyquantity[i] << " \t " << historyprice[i] * historyquantity[i] << endl;
                            shown++;
                        }
                    }
                    if (shown == 0)
                        cout << "No purchase history yet." << endl;
                }
                // apply discount code
                else if (customeroption == "11")
                {
                    system("cls");
                    if (cartcount == 0)
                    {
                        cout << "Add items to cart first." << endl;
                    }
                    else
                    {
                        cout << "Enter discount code: ";
                        string code;
                        cin >> code;
                        bool found = false;
                        for (int i = 0; i < totalcoupons; i++)
                        {
                            if (couponcode[i] == code && couponactive[i] == "Yes")
                            {
                                appliedcoupondisc = coupondiscount[i]; // save this in variable
                                cout << "Code Applied! " << appliedcoupondisc << "% discount will be added at checkout." << endl;
                                found = true;
                                break;
                            }
                        }
                        if (found != true)
                            cout << "Invalid or expired coupon code." << endl;
                    }
                }
                // rate product
                else if (customeroption == "12")
                {
                    system("cls");
                    cout << "Enter toy name to rate: ";
                    string sname;
                    cin >> sname;
                    bool found = false;
                    for (int i = 0; i < toyindex; i++)
                    {
                        if (toyname[i] == sname && toyname[i] != "")
                        {
                            cout << "Current rating: " << rating[i] << " (" << ratingcount[i] << " reviews)" << endl;
                            cout << "Enter your rating (1-5): ";
                            float newrating;
                            cin >> newrating;
                            if (newrating < 1)
                                newrating = 1;
                            if (newrating > 5)
                                newrating = 5;
                            rating[i] = (rating[i] * ratingcount[i] + newrating) / (ratingcount[i] + 1);
                            ratingcount[i]++;
                            cout << "Thank you! New average rating: " << rating[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    if (found != true)
                        cout << "Toy not found." << endl;
                }
                // featured toys
                else if (customeroption == "13")
                {
                    system("cls");
                    cout << "--- Featured Toys ---" << endl;
                    cout << "Name \t Category \t Price \t Rating" << endl;
                    cout << "----------------------------------------------" << endl;
                    bool any = false;
                    for (int i = 0; i < toyindex; i++)
                    {
                        if (toyname[i] != "" && featured[i] == "Yes")
                        {
                            cout << toyname[i] << " \t " << category[i] << " \t " << price[i] << " \t " << rating[i] << endl;
                            any = true;
                        }
                    }
                    if (any != true)
                        cout << "No featured toys at the moment." << endl;
                }
                // membership status
                else if (customeroption == "14")
                {
                    system("cls");
                    cout << "--- Membership Status ---" << endl;
                    cout << "Name: " << username[registereduser] << endl;
                    cout << "Total Spent: Rs." << totalspent[registereduser] << endl;
                    cout << "Membership: " << membership[registereduser] << endl;
                    cout << endl;
                    if (membership[registereduser] == "Gold")
                        cout << "You are a Gold member! Enjoy 10% discount on all purchases." << endl;
                    else if (membership[registereduser] == "Silver")
                        cout << "You are a Silver member! Spend Rs.15000 total to reach Gold." << endl;
                    else
                    {
                        cout << "Spend Rs.8000 total to reach Silver membership." << endl;
                        cout << "Spend Rs.15000 total to reach Gold membership." << endl;
                    }
                }
                // checkout
                else if (customeroption == "15")
                {
                    system("cls");
                    if (cartcount == 0)
                    {
                        cout << "Your cart is empty. Nothing to checkout." << endl;
                    }
                    else
                    {
                        float subtotal = 0;
                        for (int i = 0; i < cartcount; i++)
                            subtotal += price[carttoyindex[i]] * cartquantity[i];

                        // 1Membership Discount
                        float memberdisc = 0;
                        if (membership[registereduser] == "Gold")
                            memberdisc = subtotal * 0.10;
                        else if (membership[registereduser] == "Silver")
                            memberdisc = subtotal * 0.05;

                        // 2. Coupon Discount
                        float couponDiscAmount = (subtotal - memberdisc) * (appliedcoupondisc / 100.0);

                        // 3. Final
                        float afterAllDiscounts = subtotal - memberdisc - couponDiscAmount;
                        float tax = afterAllDiscounts * 0.05;
                        float grandTotal = afterAllDiscounts + tax;

                        cout << "Subtotal: Rs." << subtotal << endl;
                        cout << "Membership Discount: Rs." << memberdisc << endl;
                        if (appliedcoupondisc > 0)
                            cout << "Coupon Discount (" << appliedcoupondisc << "%): Rs." << couponDiscAmount << endl;
                        cout << "Tax (5%): Rs." << tax << endl;
                        cout << "Grand Total: Rs." << grandTotal << endl;
                        cout << endl
                             << "Enter today's date (YYYY-MM-DD): ";
                        string today;
                        cin >> today;
                        cout << "Confirm purchase? (yes/no): ";
                        string confirm;
                        cin >> confirm;

                        if (confirm == "yes")
                        {
                            for (int i = 0; i < cartcount; i++)
                            {
                                int idx = carttoyindex[i];

                                stock[idx] -= cartquantity[i];

                                // save to purchase history under logged in user
                                historyuserid[historyindex] = userid[registereduser];
                                historytoyname[historyindex] = toyname[idx];
                                historyprice[historyindex] = price[idx];
                                historyquantity[historyindex] = cartquantity[i];
                                historydate[historyindex] = today;
                                historyindex++;

                                saledate[saleindex] = today;
                                saletoyname[saleindex] = toyname[idx];
                                salequantity[saleindex] = cartquantity[i];
                                saleamount[saleindex] = price[idx] * cartquantity[i];
                                saleindex++;
                            }

                            totalRevenue += grandTotal;
                            totalspent[registereduser] += grandTotal;

                            // update membership tier for logged in user
                            if (totalspent[registereduser] >= 15000)
                                membership[registereduser] = "Gold";
                            else if (totalspent[registereduser] >= 8000)
                                membership[registereduser] = "Silver";

                            cartcount = 0;
                            appliedcoupondisc = 0;
                            cout << endl
                                 << "Purchase successful! Thank you, " << username[registereduser] << "!" << endl;
                        }
                        else
                        {
                            cout << "Checkout cancelled." << endl;
                        }
                    }
                }
                // logout
                else if (customeroption == "16")
                {
                    cout << "Logged out. Goodbye, " << username[registereduser] << "!" << endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Wrong option selected." << endl;
                }

                cout << endl
                     << "Press any key to continue...";
                getch();
            }
        }

        else if (mainOption == "3")
        {
            break;
        }
        else
        {
            cout << "Wrong option selected." << endl;
            cout << "Press any key to continue...";
            getch();
        }
    }

    cout << endl
         << "Thank you for using the Toy Shop Management System!" << endl;
    return 0;
}