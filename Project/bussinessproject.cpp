#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int toyIndex = 11;

    // toy data in parallel arrays
    string toyID[1000] = {"101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111"};
    string toyName[1000] = {"LEGO-Castle", "Barbie-Doll", "RC-Car", "Puzzle-100", "Action-Hero", "Teddy-Bear", "Dinosaur-Set", "Play-Kitchen", "Nerf-Gun", "Chess-Board", "Rubik-Cube"};
    string category[1000] = {"Blocks", "Doll", "Vehicle", "Puzzle", "Action", "Plush", "Action", "Pretend", "Outdoor", "Board", "Puzzle"};
    string ageGroup[1000] = {"5+", "3+", "8+", "6+", "5+", "0+", "4+", "3+", "8+", "10+", "7+"};
    float price[1000] = {1500, 1200, 2500, 800, 950, 600, 1100, 1800, 1350, 700, 450};
    int stock[1000] = {10, 4, 2, 15, 3, 20, 8, 6, 4, 12, 25};
    float rating[1000] = {4.5, 4.2, 3.8, 4.7, 4.0, 4.9, 4.3, 4.1, 3.9, 4.6, 4.8};
    int ratingCount[1000] = {10, 8, 5, 12, 6, 15, 7, 9, 4, 11, 20};
    string featured[1000] = {"Yes", "No", "No", "Yes", "No", "Yes", "No", "Yes", "No", "No", "Yes"};

    // user data
    int totalUsers = 3;
    int userID[100] = {1, 2, 3};
    string userName[100] = {"ahmed", "sara", "ali"};
    string membership[100] = {"Gold", "Silver", "None"};
    float totalSpent[100] = {15000, 8000, 2000};

    // cart (per session)
    int cartToyIndex[100];
    int cartQty[100];
    int cartCount = 0;

    // purchase history
    int historyUserID[1000];
    string historyToyName[1000];
    float historyPrice[1000];
    int historyQty[1000];
    string historyDate[1000];
    int historyIndex = 5;

    historyUserID[0] = 1;
    historyToyName[0] = "LEGO-Castle";
    historyPrice[0] = 1500;
    historyQty[0] = 1;
    historyDate[0] = "2025-06-10";

    historyUserID[1] = 1;
    historyToyName[1] = "RC-Car";
    historyPrice[1] = 2500;
    historyQty[1] = 2;
    historyDate[1] = "2025-06-15";

    historyUserID[2] = 2;
    historyToyName[2] = "Barbie-Doll";
    historyPrice[2] = 1200;
    historyQty[2] = 1;
    historyDate[2] = "2025-06-12";

    historyUserID[3] = 2;
    historyToyName[3] = "Teddy-Bear";
    historyPrice[3] = 600;
    historyQty[3] = 3;
    historyDate[3] = "2025-06-18";

    historyUserID[4] = 3;
    historyToyName[4] = "Action-Hero";
    historyPrice[4] = 950;
    historyQty[4] = 1;
    historyDate[4] = "2025-06-20";

    // discount coupons
    int totalCoupons = 3;
    string couponCode[50] = {"SAVE10", "WELCOME20", "TOY50"};
    float couponDiscount[50] = {10.0, 20.0, 50.0};
    string couponActive[50] = {"Yes", "Yes", "No"};

    // sales log
    string saleDate[1000];
    float saleAmount[1000];
    string saleToyName[1000];
    int saleQty[1000];
    int saleIndex = 15;

    saleDate[0] = "2025-06-10";
    saleAmount[0] = 1500;
    saleToyName[0] = "LEGO-Castle";
    saleQty[0] = 1;

    saleDate[1] = "2025-06-15";
    saleAmount[1] = 5000;
    saleToyName[1] = "RC-Car";
    saleQty[1] = 2;

    saleDate[2] = "2025-06-12";
    saleAmount[2] = 1200;
    saleToyName[2] = "Barbie-Doll";
    saleQty[2] = 1;

    saleDate[3] = "2025-06-18";
    saleAmount[3] = 1800;
    saleToyName[3] = "Teddy-Bear";
    saleQty[3] = 3;

    saleDate[4] = "2025-06-20";
    saleAmount[4] = 950;
    saleToyName[4] = "Action-Hero";
    saleQty[4] = 1;

    saleDate[5] = "2025-06-21";
    saleAmount[5] = 900;
    saleToyName[5] = "Rubik-Cube";
    saleQty[5] = 2;

    saleDate[6] = "2025-06-22";
    saleAmount[6] = 1100;
    saleToyName[6] = "Dinosaur-Set";
    saleQty[6] = 1;

    saleDate[7] = "2025-06-23";
    saleAmount[7] = 1800;
    saleToyName[7] = "Play-Kitchen";
    saleQty[7] = 1;

    saleDate[8] = "2025-06-25";
    saleAmount[8] = 700;
    saleToyName[8] = "Chess-Board";
    saleQty[8] = 1;

    saleDate[9] = "2025-06-26";
    saleAmount[9] = 2700;
    saleToyName[9] = "Nerf-Gun";
    saleQty[9] = 2;

    saleDate[10] = "2025-06-28";
    saleAmount[10] = 1600;
    saleToyName[10] = "Puzzle-100";
    saleQty[10] = 2;

    saleDate[11] = "2025-07-01";
    saleAmount[11] = 3000;
    saleToyName[11] = "LEGO-Castle";
    saleQty[11] = 2;

    saleDate[12] = "2025-07-02";
    saleAmount[12] = 1200;
    saleToyName[12] = "Teddy-Bear";
    saleQty[12] = 2;

    saleDate[13] = "2025-07-05";
    saleAmount[13] = 2500;
    saleToyName[13] = "RC-Car";
    saleQty[13] = 1;

    saleDate[14] = "2025-07-06";
    saleAmount[14] = 1350;
    saleToyName[14] = "Nerf-Gun";
    saleQty[14] = 1;

    float totalRevenue = 0;
    for (int i = 0; i < saleIndex; i++)
    {
        totalRevenue += saleAmount[i];
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
                        cout << "======================================" << endl;
                        cout << "           ADMIN PANEL                " << endl;
                        cout << "======================================" << endl;
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
                        string adminOpt;
                        cin >> adminOpt;

                        // add product
                        if (adminOpt == "1")
                        {
                            system("cls");
                            cout << "--- Add New Product ---" << endl;
                            cout << "Enter Toy ID: ";
                            cin >> toyID[toyIndex];
                            cout << "Enter Name: ";
                            cin >> toyName[toyIndex];
                            cout << "Enter Category: ";
                            cin >> category[toyIndex];
                            cout << "Enter Age Group: ";
                            cin >> ageGroup[toyIndex];
                            cout << "Enter Price: ";
                            cin >> price[toyIndex];
                            cout << "Enter Stock: ";
                            cin >> stock[toyIndex];
                            rating[toyIndex] = 0;
                            ratingCount[toyIndex] = 0;
                            featured[toyIndex] = "No";
                            toyIndex++;
                            cout << "Product added successfully!" << endl;
                        }
                        // update details
                        else if (adminOpt == "2")
                        {
                            system("cls");
                            cout << "--- Update Product ---" << endl;
                            cout << "Enter Toy Name to update: ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIdx = -1;
                            for (int i = 0; i < toyIndex; i++)
                            {
                                if (toyName[i] == searchName && toyName[i] != "")
                                {
                                    foundIdx = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "Old Record = Name: " << toyName[foundIdx] << " | Category: " << category[foundIdx] << " | Price: " << price[foundIdx] << " | Stock: " << stock[foundIdx] << endl;
                                cout << "Enter new Name: ";
                                cin >> toyName[foundIdx];
                                cout << "Enter new Category: ";
                                cin >> category[foundIdx];
                                cout << "Enter new Age Group: ";
                                cin >> ageGroup[foundIdx];
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
                        else if (adminOpt == "3")
                        {
                            system("cls");
                            cout << "--- Remove Product ---" << endl;
                            cout << "Enter Toy Name to delete: ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIdx = -1;
                            for (int i = 0; i < toyIndex; i++)
                            {
                                if (toyName[i] == searchName && toyName[i] != "")
                                {
                                    foundIdx = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                toyName[foundIdx] = "";
                                category[foundIdx] = "";
                                ageGroup[foundIdx] = "";
                                price[foundIdx] = 0;
                                stock[foundIdx] = 0;
                                rating[foundIdx] = 0;
                                ratingCount[foundIdx] = 0;
                                featured[foundIdx] = "";
                                cout << searchName << " removed successfully!" << endl;
                            }
                            else
                            {
                                cout << "Product not found." << endl;
                            }
                        }
                        // restock
                        else if (adminOpt == "4")
                        {
                            system("cls");
                            cout << "--- Restock Inventory ---" << endl;
                            cout << "Enter Toy Name to restock: ";
                            string searchName;
                            cin >> searchName;
                            bool found = false;
                            int foundIdx = -1;
                            for (int i = 0; i < toyIndex; i++)
                            {
                                if (toyName[i] == searchName && toyName[i] != "")
                                {
                                    foundIdx = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "Current stock: " << stock[foundIdx] << endl;
                                cout << "Enter quantity to add: ";
                                int addQty;
                                cin >> addQty;
                                stock[foundIdx] += addQty;
                                cout << "New stock: " << stock[foundIdx] << endl;
                            }
                            else
                            {
                                cout << "Product not found." << endl;
                            }
                        }
                        // low stock
                        else if (adminOpt == "5")
                        {
                            system("cls");
                            cout << "--- Low Stock Alerts (stock < 5) ---" << endl;
                            cout << "Name \t Category \t Stock" << endl;
                            cout << "------------------------------------" << endl;
                            bool Found = false;
                            for (int i = 0; i < toyIndex; i++)
                            {
                                if (toyName[i] != "" && stock[i] < 5)
                                {
                                    cout << toyName[i] << " \t " << category[i] << " \t " << stock[i] << endl;
                                    Found = true;
                                }
                            }
                            if (Found != true)
                            {
                                cout << "All items are well stocked!" << endl;
                            }
                        }
                        // sort inventory
                        else if (adminOpt == "6")
                        {
                            system("cls");
                            // copy arrays so original order is not changed
                            string tID[1000];
                            string tName[1000];
                            string tCat[1000];
                            string tAge[1000];
                            float tPrice[1000];
                            int tStock[1000];
                            float tRating[1000];
                            string tFeat[1000];

                            for (int i = 0; i < toyIndex; i++)
                            {
                                tID[i] = toyID[i];
                                tName[i] = toyName[i];
                                tCat[i] = category[i];
                                tAge[i] = ageGroup[i];
                                tPrice[i] = price[i];
                                tStock[i] = stock[i];
                                tRating[i] = rating[i];
                                tFeat[i] = featured[i];
                            }

                            // ascending sort by stock
                            for (int i = 0; i < toyIndex; i++)
                            {
                                for (int j = i + 1; j < toyIndex; j++)
                                {
                                    if (tStock[i] > tStock[j])
                                    {
                                        string tempid = tID[i];
                                        tID[i] = tID[j];
                                        tID[j] = tempid;

                                        string tempname = tName[i];
                                        tName[i] = tName[j];
                                        tName[j] = tempname;

                                        string tempcat = tCat[i];
                                        tCat[i] = tCat[j];
                                        tCat[j] = tempcat;

                                        string tempage = tAge[i];
                                        tAge[i] = tAge[j];
                                        tAge[j] = tempage;

                                        float tempprice = tPrice[i];
                                        tPrice[i] = tPrice[j];
                                        tPrice[j] = tempprice;

                                        int tempstock = tStock[i];
                                        tStock[i] = tStock[j];
                                        tStock[j] = tempstock;

                                        float temprating = tRating[i];
                                        tRating[i] = tRating[j];
                                        tRating[j] = temprating;

                                        string tempfeat = tFeat[i];
                                        tFeat[i] = tFeat[j];
                                        tFeat[j] = tempfeat;
                                    }
                                }
                            }

                            cout << "--- Inventory Sorted by Stock (Low to High) ---" << endl;
                            cout << "Name \t Category \t Price \t Stock \t Rating" << endl;
                            cout << "-----------------------------------------------" << endl;
                            for (int i = 0; i < toyIndex; i++)
                            {
                                if (tName[i] != "")
                                    cout << tName[i] << " \t " << tCat[i] << " \t " << tPrice[i] << " \t " << tStock[i] << " \t " << tRating[i] << endl;
                            }
                        }
                        // sales history
                        else if (adminOpt == "7")
                        {
                            system("cls");
                            cout << "--- Total Sales History ---" << endl;
                            cout << "Date \t Toy \t Qty \t Amount" << endl;
                            cout << "----------------------------------------------" << endl;
                            for (int i = 0; i < saleIndex; i++)
                            {
                                cout << saleDate[i] << " \t " << saleToyName[i] << " \t " << saleQty[i] << " \t " << saleAmount[i] << endl;
                            }
                            cout << endl
                                 << "Total Revenue: Rs." << totalRevenue << endl;
                        }
                        // sort sales
                        else if (adminOpt == "8")
                        {
                            system("cls");
                            // copy sales arrays
                            string sDates[1000];
                            float sAmounts[1000];
                            string sToys[1000];
                            int sQtys[1000];
                            for (int i = 0; i < saleIndex; i++)
                            {
                                sDates[i] = saleDate[i];
                                sAmounts[i] = saleAmount[i];
                                sToys[i] = saleToyName[i];
                                sQtys[i] = saleQty[i];
                            }

                            // descending by amount
                            for (int i = 0; i < saleIndex; i++)
                            {
                                for (int j = i + 1; j < saleIndex; j++)
                                {
                                    if (sAmounts[i] < sAmounts[j])
                                    {
                                        float tempamount = sAmounts[i];
                                        sAmounts[i] = sAmounts[j];
                                        sAmounts[j] = tempamount;

                                        int tempQTY = sQtys[i];
                                        sQtys[i] = sQtys[j];
                                        sQtys[j] = tempQTY;

                                        string tempdate = sDates[i];
                                        sDates[i] = sDates[j];
                                        sDates[j] = tempdate;

                                        string tempToy = sToys[i];
                                        sToys[i] = sToys[j];
                                        sToys[j] = tempToy;
                                    }
                                }
                            }

                            cout << "--- Sales Sorted by Revenue (High to Low) ---" << endl;
                            cout << "Date \t Toy \t Qty \t Amount" << endl;
                            cout << "----------------------------------------------" << endl;
                            for (int i = 0; i < saleIndex; i++)
                            {
                                cout << sDates[i] << " \t " << sToys[i] << " \t " << sQtys[i] << " \t " << sAmounts[i] << endl;
                            }
                        }
                        // customer history
                        else if (adminOpt == "9")
                        {
                            system("cls");
                            cout << "--- Search Customer History ---" << endl;
                            cout << "Enter customer name: ";
                            string cname;
                            cin >> cname;
                            int cid = -1;
                            for (int i = 0; i < totalUsers; i++)
                            {
                                if (userName[i] == cname)
                                {
                                    cid = userID[i];
                                    break;
                                }
                            }
                            if (cid == -1)
                            {
                                cout << "Customer not found." << endl;
                            }
                            else
                            {
                                cout << "Purchase history for " << cname << ":" << endl;
                                cout << "Date \t Toy \t Qty \t Amount" << endl;
                                cout << "----------------------------------------------" << endl;
                                bool History = false;
                                for (int i = 0; i < historyIndex; i++)
                                {
                                    if (historyUserID[i] == cid)
                                    {
                                        cout << historyDate[i] << " \t " << historyToyName[i] << " \t " << historyQty[i] << " \t " << historyPrice[i] * historyQty[i] << endl;
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
                        else if (adminOpt == "10")
                        {
                            system("cls");
                            cout << "--- Manage Discount Coupons ---" << endl;
                            cout << "Code \t Discount% \t Active" << endl;
                            cout << "--------------------------------------" << endl;
                            for (int i = 0; i < totalCoupons; i++)
                            {
                                cout << couponCode[i] << " \t " << couponDiscount[i] << "% \t " << couponActive[i] << endl;
                            }
                            cout << endl
                                 << "1. Add Coupon" << endl
                                 << "2. Expire Coupon" << endl
                                 << "3. Exit" << endl;
                            cout << "Choose: ";
                            string couponOpt;
                            cin >> couponOpt;
                            if (couponOpt == "1")
                            {
                                cout << "Enter code: ";
                                cin >> couponCode[totalCoupons];
                                cout << "Enter discount %: ";
                                cin >> couponDiscount[totalCoupons];
                                couponActive[totalCoupons] = "Yes";
                                totalCoupons++;
                                cout << "Coupon added!" << endl;
                            }
                            else if (couponOpt == "2")
                            {
                                cout << "Enter coupon code to expire: ";
                                string expirec;
                                cin >> expirec;
                                bool found = false;
                                for (int i = 0; i < totalCoupons; i++)
                                {
                                    if (couponCode[i] == expirec)
                                    {
                                        couponActive[i] = "No";
                                        cout << "Coupon expired." << endl;
                                        found = true;
                                        break;
                                    }
                                }
                                if (found != true)
                                    cout << "Coupon not found." << endl;
                            }
                            else if (couponOpt == "3")
                            {
                                cout << "Returning..." << endl;
                            }
                            else
                            {
                                cout << "Invalid option." << endl;
                            }
                        }
                        // user list
                        else if (adminOpt == "11")
                        {
                            system("cls");
                            cout << "--- All Registered Users ---" << endl;
                            cout << "ID \t Name \t Membership \t Total Spent" << endl;
                            cout << "----------------------------------------------" << endl;
                            for (int i = 0; i < totalUsers; i++)
                            {
                                cout << userID[i] << " \t " << userName[i] << " \t " << membership[i] << " \t " << totalSpent[i] << endl;
                            }
                        }
                        // daily report
                        else if (adminOpt == "12")
                        {
                            system("cls");
                            cout << "--- Daily Report ---" << endl;
                            cout << "Enter date (YYYY-MM-DD): ";
                            string reportDate;
                            cin >> reportDate;
                            float dayTotal = 0;
                            int dayToys = 0;
                            for (int i = 0; i < saleIndex; i++)
                            {
                                if (saleDate[i] == reportDate)
                                {
                                    dayTotal += saleAmount[i];
                                    dayToys += saleQty[i];
                                }
                            }
                            cout << endl
                                 << "Date: " << reportDate << endl;
                            cout << "Toys Sold: " << dayToys << endl;
                            cout << "Revenue: Rs." << dayTotal << endl;
                            if (dayToys == 0)
                            {
                                cout << "(No sales recorded on this date)" << endl;
                            }
                        }
                        // reset history
                        else if (adminOpt == "13")
                        {
                            system("cls");
                            cout << "Are you sure you want to reset ALL sales history? (yes/no): ";
                            string confirm;
                            cin >> confirm;
                            if (confirm == "yes")
                            {
                                saleIndex = 0;
                                historyIndex = 0;
                                totalRevenue = 0;
                                cout << "All sales history has been cleared." << endl;
                            }
                            else
                            {
                                cout << "Reset cancelled." << endl;
                            }
                        }
                        // admin dashboard
                        else if (adminOpt == "14")
                        {
                            system("cls");
                            int activeProducts = 0;
                            for (int i = 0; i < toyIndex; i++)
                                if (toyName[i] != "")
                                    activeProducts++;

                            int lowStockCount = 0;
                            for (int i = 0; i < toyIndex; i++)
                                if (toyName[i] != "" && stock[i] < 5)
                                    lowStockCount++;

                            int activeCoupons = 0;
                            for (int i = 0; i < totalCoupons; i++)
                                if (couponActive[i] == "Yes")
                                    activeCoupons++;

                            cout << "============================================" << endl;
                            cout << "           ADMIN DASHBOARD                  " << endl;
                            cout << "============================================" << endl;
                            cout << "Total Products: " << activeProducts << endl;
                            cout << "Total Users: " << totalUsers << endl;
                            cout << "Total Revenue: Rs." << totalRevenue << endl;
                            cout << "Total Sales: " << saleIndex << endl;
                            cout << "Low Stock Items: " << lowStockCount << endl;
                            cout << "Active Coupons: " << activeCoupons << endl;
                            cout << "============================================" << endl;
                        }
                        // logout
                        else if (adminOpt == "15")
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
            int loggedUserIdx = -1;
            for (int i = 0; i < totalUsers; i++)
            {
                if (userName[i] == cname)
                {
                    loggedUserIdx = i;
                    break;
                }
            }

            // if name is not present, make a new coustomer
            if (loggedUserIdx == -1)
            {
                cout << "Name not found. Register as new customer? (yes/no): ";
                string reg;
                cin >> reg;
                if (reg == "yes")
                {
                    userID[totalUsers] = totalUsers + 1;
                    userName[totalUsers] = cname;
                    membership[totalUsers] = "None";
                    totalSpent[totalUsers] = 0;
                    loggedUserIdx = totalUsers;
                    totalUsers++;
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

            cout << "Welcome, " << userName[loggedUserIdx] << "! Membership: " << membership[loggedUserIdx] << endl;
            cout << "Press Any key to continue..." << endl;
            getch();

            cartCount = 0;               // reset cart for this session
            float appliedCouponDisc = 0; // for storing coupon for this session

            while (true)
            {
                system("cls");
                cout << "===================================" << endl;
                cout << "  CUSTOMER MENU - " << userName[loggedUserIdx] << endl;
                cout << "===================================" << endl;
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
                string custOpt;
                cin >> custOpt;

                // all products
                if (custOpt == "1")
                {
                    system("cls");
                    cout << "--- All Products ---" << endl;
                    cout << "ID \t Name \t Category \t Age \t Price \t Stock \t Rating" << endl;
                    cout << "----------------------------------------------------------------------" << endl;
                    for (int i = 0; i < toyIndex; i++)
                    {
                        if (toyName[i] != "")
                            cout << toyID[i] << " \t " << toyName[i] << " \t " << category[i] << " \t "
                                 << ageGroup[i] << " \t " << price[i] << " \t " << stock[i] << " \t " << rating[i] << endl;
                    }
                }
                // search by name
                else if (custOpt == "2")
                {
                    system("cls");
                    cout << "Enter toy name to search: ";
                    string sname;
                    cin >> sname;
                    bool found = false;
                    for (int i = 0; i < toyIndex; i++)
                    {
                        if (toyName[i] == sname && toyName[i] != "")
                        {
                            cout << endl
                                 << "Found!" << endl;
                            cout << "Name: " << toyName[i] << " | Category: " << category[i]
                                 << " | Age: " << ageGroup[i] << " | Price: Rs." << price[i]
                                 << " | Stock: " << stock[i] << " | Rating: " << rating[i] << endl;
                            found = true;
                        }
                    }
                    if (found != true)
                        cout << "Toy not found." << endl;
                }
                // sort ascending price
                else if (custOpt == "3")
                {
                    system("cls");
                    // copy arrays
                    string sName[1000];
                    string sCat[1000];
                    float sPrice[1000];
                    int sStock[1000];
                    float sRating[1000];
                    for (int i = 0; i < toyIndex; i++)
                    {
                        sName[i] = toyName[i];
                        sCat[i] = category[i];
                        sPrice[i] = price[i];
                        sStock[i] = stock[i];
                        sRating[i] = rating[i];
                    }
                    // bubble sort ascending
                    for (int i = 0; i < toyIndex; i++)
                    {
                        for (int j = i + 1; j < toyIndex; j++)
                        {
                            if (sPrice[i] > sPrice[j])
                            {
                                float tempprice = sPrice[i];
                                sPrice[i] = sPrice[j];
                                sPrice[j] = tempprice;

                                float temprating = sRating[i];
                                sRating[i] = sRating[j];
                                sRating[j] = temprating;

                                int tempstock = sStock[i];
                                sStock[i] = sStock[j];
                                sStock[j] = tempstock;

                                string tempname = sName[i];
                                sName[i] = sName[j];
                                sName[j] = tempname;

                                string tempcat = sCat[i];
                                sCat[i] = sCat[j];
                                sCat[j] = tempcat;
                            }
                        }
                    }
                    cout << "--- Products: Price Low to High ---" << endl;
                    cout << "Name \t Category \t Price \t Stock \t Rating" << endl;
                    cout << "----------------------------------------------" << endl;
                    for (int i = 0; i < toyIndex; i++)
                        if (sName[i] != "")
                            cout << sName[i] << " \t " << sCat[i] << " \t " << sPrice[i] << " \t " << sStock[i] << " \t " << sRating[i] << endl;
                }
                // sort descending price
                else if (custOpt == "4")
                {
                    system("cls");
                    // copy arrays
                    string sName[1000];
                    string sCat[1000];
                    float sPrice[1000];
                    int sStock[1000];
                    float sRating[1000];
                    for (int i = 0; i < toyIndex; i++)
                    {
                        sName[i] = toyName[i];
                        sCat[i] = category[i];
                        sPrice[i] = price[i];
                        sStock[i] = stock[i];
                        sRating[i] = rating[i];
                    }
                    // bubble sort descending
                    for (int i = 0; i < toyIndex; i++)
                    {
                        for (int j = i + 1; j < toyIndex; j++)
                        {
                            if (sPrice[i] < sPrice[j])
                            {
                                float tempprice = sPrice[i];
                                sPrice[i] = sPrice[j];
                                sPrice[j] = tempprice;

                                float temprating = sRating[i];
                                sRating[i] = sRating[j];
                                sRating[j] = temprating;

                                int tempstock = sStock[i];
                                sStock[i] = sStock[j];
                                sStock[j] = tempstock;

                                string tempname = sName[i];
                                sName[i] = sName[j];
                                sName[j] = tempname;

                                string tempcat = sCat[i];
                                sCat[i] = sCat[j];
                                sCat[j] = tempcat;
                            }
                        }
                    }
                    cout << "--- Products: Price High to Low ---" << endl;
                    cout << "Name \t Category \t Price \t Stock \t Rating" << endl;
                    cout << "----------------------------------------------" << endl;
                    for (int i = 0; i < toyIndex; i++)
                        if (sName[i] != "")
                            cout << sName[i] << " \t " << sCat[i] << " \t " << sPrice[i] << " \t " << sStock[i] << " \t " << sRating[i] << endl;
                }
                // filter by category
                else if (custOpt == "5")
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
                    for (int i = 0; i < toyIndex; i++)
                    {
                        if (toyName[i] != "" && category[i] == filterCat)
                        {
                            cout << toyName[i] << " \t " << ageGroup[i] << " \t " << price[i] << " \t " << stock[i] << " \t " << rating[i] << endl;
                            any = true;
                        }
                    }
                    if (any != true)
                        cout << "No toys found in this category." << endl;
                }
                // check stock
                else if (custOpt == "6")
                {
                    system("cls");
                    cout << "Enter toy name: ";
                    string sname;
                    cin >> sname;
                    bool found = false;
                    for (int i = 0; i < toyIndex; i++)
                    {
                        if (toyName[i] == sname && toyName[i] != "")
                        {
                            if (stock[i] > 0)
                                cout << toyName[i] << " is in stock. Available: " << stock[i] << " units." << endl;
                            else
                                cout << toyName[i] << " is out of stock." << endl;
                            found = true;
                        }
                    }
                    if (found != true)
                        cout << "Toy not found." << endl;
                }
                // add to cart
                else if (custOpt == "7")
                {
                    system("cls");
                    cout << "Enter toy name to add to cart: ";
                    string sname;
                    cin >> sname;
                    bool found = false;
                    int foundIdx = -1;
                    for (int i = 0; i < toyIndex; i++)
                    {
                        if (toyName[i] == sname && toyName[i] != "")
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
                        int qty;
                        cin >> qty;

                        if (qty <= 0)
                        {
                            cout << "Invalid quantity." << endl;
                        }
                        else if (qty > stock[foundIdx])
                        {
                            cout << "Not enough stock. Max available: " << stock[foundIdx] << endl;
                        }
                        else // Only proceed if stock is actually available
                        {
                            bool already = false;
                            for (int i = 0; i < cartCount; i++)
                            {
                                if (cartToyIndex[i] == foundIdx)
                                {
                                    // Also check if existing cart qty + new qty exceeds stock
                                    if (cartQty[i] + qty > stock[foundIdx])
                                    {
                                        cout << "Total in cart would exceed stock!" << endl;
                                    }
                                    else
                                    {
                                        cartQty[i] += qty;
                                        cout << "Updated cart quantity!" << endl;
                                    }
                                    already = true;
                                    break;
                                }
                            }
                            if (!already)
                            {
                                cartToyIndex[cartCount] = foundIdx;
                                cartQty[cartCount] = qty;
                                cartCount++;
                                cout << qty << "x " << toyName[foundIdx] << " added to cart!" << endl;
                            }
                        }
                    }
                }

                // view / remove from cart
                else if (custOpt == "8")
                {
                    system("cls");
                    if (cartCount == 0)
                    {
                        cout << "Your cart is empty." << endl;
                    }
                    else
                    {
                        cout << "--- Your Cart ---" << endl;
                        cout << "No. \t Name \t Qty \t Price \t Subtotal" << endl;
                        cout << "----------------------------------------------" << endl;
                        float cartTotal = 0;
                        for (int i = 0; i < cartCount; i++)
                        {
                            int idx = cartToyIndex[i];
                            float sub = price[idx] * cartQty[i];
                            cartTotal += sub;
                            cout << i + 1 << " \t " << toyName[idx] << " \t " << cartQty[i] << " \t " << price[idx] << " \t " << sub << endl;
                        }
                        cout << endl
                             << "Cart Total: Rs." << cartTotal << endl;
                        cout << endl
                             << "Enter item number to remove (0 to keep all): ";
                        int removeNum;
                        cin >> removeNum;
                        if (removeNum > 0 && removeNum <= cartCount)
                        {
                            for (int i = removeNum - 1; i < cartCount - 1; i++)
                            {
                                cartToyIndex[i] = cartToyIndex[i + 1];
                                cartQty[i] = cartQty[i + 1];
                            }
                            cartCount--;
                            cout << "Item removed from cart." << endl;
                        }
                    }
                }
                // total bill
                else if (custOpt == "9")
                {
                    system("cls");
                    if (cartCount == 0)
                    {
                        cout << "Your cart is empty." << endl;
                    }
                    else
                    {
                        float subtotal = 0;
                        for (int i = 0; i < cartCount; i++)
                            subtotal += price[cartToyIndex[i]] * cartQty[i];

                        // 1. Membership Discount
                        float memberDisc = 0;
                        if (membership[loggedUserIdx] == "Gold")
                            memberDisc = subtotal * 0.10;
                        else if (membership[loggedUserIdx] == "Silver")
                            memberDisc = subtotal * 0.05;

                        // 2. Coupon Discount
                        float couponDiscAmount = (subtotal - memberDisc) * (appliedCouponDisc / 100.0);

                        // 3. Final
                        float afterAllDiscounts = subtotal - memberDisc - couponDiscAmount;
                        float tax = afterAllDiscounts * 0.05;
                        float grandTotal = afterAllDiscounts + tax;

                        // Display updated summary
                        cout << "Subtotal: Rs." << subtotal << endl;
                        cout << "Membership Discount: Rs." << memberDisc << endl;
                        if (appliedCouponDisc > 0)
                            cout << "Coupon Discount (" << appliedCouponDisc << "%): Rs." << couponDiscAmount << endl;
                        cout << "Tax (5%): Rs." << tax << endl;
                        cout << "Grand Total: Rs." << grandTotal << endl;
                    }
                }
                // purchase history — shows only logged in user's records
                else if (custOpt == "10")
                {
                    system("cls");
                    int cid = userID[loggedUserIdx];
                    cout << "--- Purchase History for " << userName[loggedUserIdx] << " (Last 10) ---" << endl;
                    cout << "Date \t Toy \t Qty \t Amount" << endl;
                    cout << "----------------------------------------------" << endl;
                    int shown = 0;
                    for (int i = historyIndex - 1; i >= 0 && shown < 10; i--)
                    {
                        if (historyUserID[i] == cid)
                        {
                            cout << historyDate[i] << " \t " << historyToyName[i] << " \t "
                                 << historyQty[i] << " \t " << historyPrice[i] * historyQty[i] << endl;
                            shown++;
                        }
                    }
                    if (shown == 0)
                        cout << "No purchase history yet." << endl;
                }
                // apply discount code
                else if (custOpt == "11")
                {
                    system("cls");
                    if (cartCount == 0)
                    {
                        cout << "Add items to cart first." << endl;
                    }
                    else
                    {
                        cout << "Enter discount code: ";
                        string code;
                        cin >> code;
                        bool found = false;
                        for (int i = 0; i < totalCoupons; i++)
                        {
                            if (couponCode[i] == code && couponActive[i] == "Yes")
                            {
                                appliedCouponDisc = couponDiscount[i]; // save this in variable
                                cout << "Code Applied! " << appliedCouponDisc << "% discount will be added at checkout." << endl;
                                found = true;
                                break;
                            }
                        }
                        if (found != true)
                            cout << "Invalid or expired coupon code." << endl;
                    }
                }
                // rate product
                else if (custOpt == "12")
                {
                    system("cls");
                    cout << "Enter toy name to rate: ";
                    string sname;
                    cin >> sname;
                    bool found = false;
                    for (int i = 0; i < toyIndex; i++)
                    {
                        if (toyName[i] == sname && toyName[i] != "")
                        {
                            cout << "Current rating: " << rating[i] << " (" << ratingCount[i] << " reviews)" << endl;
                            cout << "Enter your rating (1-5): ";
                            float newRating;
                            cin >> newRating;
                            if (newRating < 1)
                                newRating = 1;
                            if (newRating > 5)
                                newRating = 5;
                            rating[i] = (rating[i] * ratingCount[i] + newRating) / (ratingCount[i] + 1);
                            ratingCount[i]++;
                            cout << "Thank you! New average rating: " << rating[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    if (found != true)
                        cout << "Toy not found." << endl;
                }
                // featured toys
                else if (custOpt == "13")
                {
                    system("cls");
                    cout << "--- Featured Toys ---" << endl;
                    cout << "Name \t Category \t Price \t Rating" << endl;
                    cout << "----------------------------------------------" << endl;
                    bool any = false;
                    for (int i = 0; i < toyIndex; i++)
                    {
                        if (toyName[i] != "" && featured[i] == "Yes")
                        {
                            cout << toyName[i] << " \t " << category[i] << " \t " << price[i] << " \t " << rating[i] << endl;
                            any = true;
                        }
                    }
                    if (any != true)
                        cout << "No featured toys at the moment." << endl;
                }
                // membership status
                else if (custOpt == "14")
                {
                    system("cls");
                    cout << "--- Membership Status ---" << endl;
                    cout << "Name: " << userName[loggedUserIdx] << endl;
                    cout << "Total Spent: Rs." << totalSpent[loggedUserIdx] << endl;
                    cout << "Membership: " << membership[loggedUserIdx] << endl;
                    cout << endl;
                    if (membership[loggedUserIdx] == "Gold")
                        cout << "You are a Gold member! Enjoy 10% discount on all purchases." << endl;
                    else if (membership[loggedUserIdx] == "Silver")
                        cout << "You are a Silver member! Spend Rs.15000 total to reach Gold." << endl;
                    else
                    {
                        cout << "Spend Rs.8000 total to reach Silver membership." << endl;
                        cout << "Spend Rs.15000 total to reach Gold membership." << endl;
                    }
                }
                // checkout
                else if (custOpt == "15")
                {
                    system("cls");
                    if (cartCount == 0)
                    {
                        cout << "Your cart is empty. Nothing to checkout." << endl;
                    }
                    else
                    {
                        float subtotal = 0;
                        for (int i = 0; i < cartCount; i++)
                            subtotal += price[cartToyIndex[i]] * cartQty[i];

                        // 1Membership Discount
                        float memberDisc = 0;
                        if (membership[loggedUserIdx] == "Gold")
                            memberDisc = subtotal * 0.10;
                        else if (membership[loggedUserIdx] == "Silver")
                            memberDisc = subtotal * 0.05;

                        // 2. Coupon Discount
                        float couponDiscAmount = (subtotal - memberDisc) * (appliedCouponDisc / 100.0);

                        // 3. Final
                        float afterAllDiscounts = subtotal - memberDisc - couponDiscAmount;
                        float tax = afterAllDiscounts * 0.05;
                        float grandTotal = afterAllDiscounts + tax;

                        cout << "Subtotal: Rs." << subtotal << endl;
                        cout << "Membership Discount: Rs." << memberDisc << endl;
                        if (appliedCouponDisc > 0)
                            cout << "Coupon Discount (" << appliedCouponDisc << "%): Rs." << couponDiscAmount << endl;
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
                            for (int i = 0; i < cartCount; i++)
                            {
                                int idx = cartToyIndex[i];

                                stock[idx] -= cartQty[i];

                                // save to purchase history under logged in user
                                historyUserID[historyIndex] = userID[loggedUserIdx];
                                historyToyName[historyIndex] = toyName[idx];
                                historyPrice[historyIndex] = price[idx];
                                historyQty[historyIndex] = cartQty[i];
                                historyDate[historyIndex] = today;
                                historyIndex++;

                                saleDate[saleIndex] = today;
                                saleToyName[saleIndex] = toyName[idx];
                                saleQty[saleIndex] = cartQty[i];
                                saleAmount[saleIndex] = price[idx] * cartQty[i];
                                saleIndex++;
                            }

                            totalRevenue += grandTotal;
                            totalSpent[loggedUserIdx] += grandTotal;

                            // update membership tier for logged in user
                            if (totalSpent[loggedUserIdx] >= 15000)
                                membership[loggedUserIdx] = "Gold";
                            else if (totalSpent[loggedUserIdx] >= 8000)
                                membership[loggedUserIdx] = "Silver";

                            cartCount = 0;
                            appliedCouponDisc = 0;
                            cout << endl
                                 << "Purchase successful! Thank you, " << userName[loggedUserIdx] << "!" << endl;
                        }
                        else
                        {
                            cout << "Checkout cancelled." << endl;
                        }
                    }
                }
                // logout
                else if (custOpt == "16")
                {
                    cout << "Logged out. Goodbye, " << userName[loggedUserIdx] << "!" << endl;
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