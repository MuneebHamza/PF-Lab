#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

//------------------------------------------------------Global initials_____________-----------------------------------------------_______________________________-----------------------------------
int totaltoys = 11;
int totalusers = 3;
int totalsales = 15;
int history = 5;
int cartcount = 0;

string toyid[100] = {"101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111"};
string toyname[100] = {"LEGO-Castle", "Barbie-Doll", "RC-Car", "Puzzle-100", "Action-Hero", "Teddy-Bear", "Dinosaur-Set", "Play-Kitchen", "Nerf-Gun", "Chess-Board", "Rubik-Cube"};
string category[100] = {"Blocks", "Doll", "Vehicle", "Puzzle", "Action", "Plush", "Action", "Pretend", "Outdoor", "Board", "Puzzle"};
string agegroup[100] = {"5+", "3+", "8+", "6+", "5+", "0+", "4+", "3+", "8+", "10+", "7+"};
float price[100] = {1500, 1200, 2500, 800, 950, 600, 1100, 1800, 1350, 700, 450};
int stock[100] = {10, 4, 2, 15, 3, 20, 8, 6, 4, 12, 25};


int userid[100] = {1, 2, 3};
string username[100] = {"ahmed", "sara", "ali"};
string membership[100] = {"Gold", "Silver", "None"};
float totalspent[100] = {15000, 8000, 2000};

int carttoy[100];
int cartquantity[100];

string saledate[100] = {"2026-04-10", "2026-04-15", "2026-04-12", "2026-04-18", "2026-04-20", "2026-04-21", "2026-04-22", "2026-04-23", "2026-04-25", "2026-04-26", "2026-04-28", "2026-05-01", "2026-05-02", "2026-05-05", "2026-05-06"};
float saleamount[100] = {1500, 5000, 1200, 1800, 950, 900, 1100, 1800, 700, 2700, 1600, 3000, 1200, 2500, 1350};
string saletoyname[100] = {"LEGO-Castle", "RC-Car", "Barbie-Doll", "Teddy-Bear", "Action-Hero", "Rubik-Cube", "Dinosaur-Set", "Play-Kitchen", "Chess-Board", "Nerf-Gun", "Puzzle-100", "LEGO-Castle", "Teddy-Bear", "RC-Car", "Nerf-Gun"};
int salequantity[100] = {1, 2, 1, 3, 1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1};
float totalrevenue = 0;

int historyuserid[100] = {1, 1, 2, 2, 3};
string historytoyname[100] = {"Lego-Castle", "RC-Car", "Barbie-Doll", "Teddy-Bear", "Action-Hero"};
float historyprice[100] = {1500, 2500, 1200, 600, 950};
int historyquantity[100] = {1, 2, 1, 3, 1};
string historydate[100] = {"2026-06-10", "2026-06-15", "2026-06-12", "2026-06-18", "2026-06-20"};


// -------------------------------------------------------------------------Functions-------------------------------------------------------------------------------------------------
int findtoy(string name);
int finduser(string name);

// ----------------------------------------------------------------------------admin
void addproduct();
void updateproduct();
void removeproduct();
void restockinventory();
void sortinventorybystock();
void viewsalehistory();
void sortsalesbyrevenue();
void searchcoustmerhistory();
void viewallusers();

//-------------------------------------------------------------------------- customer
void viewallproducts();
void searchbyname();
void sortbyprice();
void filterbycategory();
void addtocart();
void viewcart();
void viewpurchasehistory(int registereduser);
void viewmembershipstatus(int registereduser);
void checkout(int registereduser);
//----------------------------------------------------------------------------- login
void adminmenu();
void adminlogin();
void customermenu(int registereduser);
void customerlogin();
//---------------------------------------------------------------------- file handling
void loaddata();
void savedata();

//-----------------------------------------------------------------main-----------------------------------------------------------------------------

int main()
{
    loaddata();
    fstream revenuecheck;
    revenuecheck.open("sales.txt", ios::in);
    bool salesfileexists = revenuecheck.is_open();
    revenuecheck.close();
    if (!salesfileexists)
    {
        for (int i = 0; i < totalsales; i++)
        {
            totalrevenue += saleamount[i];
        }
    }
    while (true)
    {
        system("cls");
        cout << "========================================================" << endl;
        cout << "              Toy Shop Management System               " << endl;
        cout << "========================================================" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Customer" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter an option to choose: " << endl;
        string mainoption;
        cin >> mainoption;
        if (mainoption == "1")
        {
            adminlogin();
        }
        else if (mainoption == "2")
        {
            customerlogin();
        }
        else if (mainoption == "3")
        {
            break;
        }
        else
        {
            cout << "Wrong option selected" << endl;
            cout << "Press Any key to continue...." << endl;
            getch();
        }
    }
    savedata();
    cout << "Thank you for using the Toy Shop Management System!" << endl;
    return 0;
}

// -------------------------------------------------------------------Search Functions_---------------------------------------------------------------------------------
int findtoy(string name)
{
    for (int i = 0; i < totaltoys; i++)
    {
        if (toyname[i] == name && toyname[i] != "")
            return i;
    }
    return -1;
}

int finduser(string name)
{
    for (int i = 0; i < totalusers; i++)
    {
        if (username[i] == name && username[i] != "")
            return i;
    }
    return -1;
}

// ------------------------------------------------------------------------------admin
void addproduct()
{
    system("cls");
    cout << "Enter Toy ID: ";
    cin >> toyid[totaltoys];
    cout << "Enter Name: ";
    cin >> toyname[totaltoys];
    cout << "Enter Category: ";
    cin >> category[totaltoys];
    cout << "Enter Age Group: ";
    cin >> agegroup[totaltoys];
    cout << "Enter Price: ";
    cin >> price[totaltoys];
    cout << "Enter Stock: ";
    cin >> stock[totaltoys];
    totaltoys++;
    cout << "Product added successfully!" << endl;
}

void updateproduct()
{
    system("cls");
    cout << "Enter Toy name to update: " << endl;
    string searchname;
    cin >> searchname;
    int i = findtoy(searchname);
    if (i == -1)
    {
        cout << "Product not found." << endl;
        return;
    }
    cout << "Old Record = Name: " << toyname[i] << " \t Category: " << category[i] << " \t Price: " << price[i] << " \t Stock: " << stock[i] << endl;
    cout << "Enter new Name: ";
    cin >> toyname[i];
    cout << "Enter new Category: ";
    cin >> category[i];
    cout << "Enter new Age Group: ";
    cin >> agegroup[i];
    cout << "Enter new Price: ";
    cin >> price[i];
    cout << "Enter new Stock: ";
    cin >> stock[i];
    cout << "Updated successfully!" << endl;
}

void removeproduct()
{
    system("cls");
    cout << "Enter Toy name to delete: " << endl;
    string searchname;
    cin >> searchname;
    int i = findtoy(searchname);
    if (i == -1)
    {
        cout << "Product not found." << endl;
        return;
    }
    toyname[i] = "";
    category[i] = "";
    agegroup[i] = "";
    price[i] = 0;
    stock[i] = 0;
    cout << searchname << " removed successfully!" << endl;
}

void restockinventory()
{
    system("cls");
    cout << "Enter Toy Name to restock: ";
    string searchName;
    cin >> searchName;
    int i = findtoy(searchName);
    if (i == -1)
    {
        cout << "Product not found." << endl;
        return;
    }
    cout << "Current stock: " << stock[i] << endl;
    cout << "Enter quantity to add: ";
    int addquantity;
    cin >> addquantity;
    stock[i] += addquantity;
    cout << "New stock: " << stock[i] << endl;
}

void sortinventorybystock()
{
    system("cls");
    string toyid2[100];
    string toyname2[100];
    string toycategory2[100];
    string toyagegroup2[100];
    float toyprice2[100];
    int toystock2[100];
    for (int i = 0; i < totaltoys; i++)
    {
        toyid2[i] = toyid[i];
        toyname2[i] = toyname[i];
        toycategory2[i] = category[i];
        toyagegroup2[i] = agegroup[i];
        toyprice2[i] = price[i];
        toystock2[i] = stock[i];
    }
    for (int i = 0; i < totaltoys; i++)
    {
        for (int j = i+1; j < totaltoys; j++)
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
            }
        }
    }
    cout << "Name \t Category \t Price \t Stock " << endl;
    for (int i = 0; i < totaltoys; i++)
    {
        if (toyname2[i] != "")
            cout << toyname2[i] << " \t " << toycategory2[i] << " \t " << toyprice2[i] << " \t " << toystock2[i]  << endl;
    }
}

void viewsalehistory()
{
    system("cls");
    cout << "Date \t Toy \t Qty \t Amount" << endl;
    for (int i = 0; i < totalsales; i++)
    {
        cout << saledate[i] << " \t " << saletoyname[i] << " \t " << salequantity[i] << " \t " << saleamount[i] << endl;
    }
    cout << "Total Revenue: Rs." << totalrevenue << endl;
}

void sortsalesbyrevenue()
{
    system("cls");
    string saledates2[100];
    float saleamounts2[100];
    string saletoys2[100];
    int salequantities2[100];
    for (int i = 0; i < totalsales; i++)
    {
        saledates2[i] = saledate[i];
        saleamounts2[i] = saleamount[i];
        saletoys2[i] = saletoyname[i];
        salequantities2[i] = salequantity[i];
    }

    for (int i = 0; i < totalsales; i++)
    {
        for (int j = i+1; j < totalsales; j++)
        {
            if (saleamounts2[i] < saleamounts2[j])
            {
                float tempamount = saleamounts2[i];
                saleamounts2[i] = saleamounts2[j];
                saleamounts2[j] = tempamount;

                int tempqty = salequantities2[i];
                salequantities2[i] = salequantities2[j];
                salequantities2[j] = tempqty;

                string tempdate = saledates2[i];
                saledates2[i] = saledates2[j];
                saledates2[j] = tempdate;

                string temptoy = saletoys2[i];
                saletoys2[i] = saletoys2[j];
                saletoys2[j] = temptoy;
            }
        }
    }
    cout << "Date \t Toy \t Qty \t Amount" << endl;
    for (int i = 0; i < totalsales; i++)
    {
        cout << saledates2[i] << " \t " << saletoys2[i] << " \t " << salequantities2[i] << " \t " << saleamounts2[i] << endl;
    }
}

void searchcustomerhistory()
{
    system("cls");
    cout << "Enter customer name: ";
    string customername;
    cin >> customername;
    int useri = finduser(customername);
    if (useri == -1)
    {
        cout << "Customer not found." << endl;
        return;
    }
    cout << "Purchase history for " << customername << ":" << endl;
    cout << "Date \t Toy \t Qty \t Amount" << endl;
    bool historyfound = false;
    for (int i = 0; i < history; i++)
    {
        if (historyuserid[i] == userid[useri])
        {
            cout << historydate[i] << " \t " << historytoyname[i] << " \t " << historyquantity[i] << " \t " << historyprice[i] * historyquantity[i] << endl;
            historyfound = true;
        }
    }
    if (historyfound != true)
    {
        cout << "No purchase history found." << endl;
    }
}

void viewallusers()
{
    system("cls");
    cout << "ID \t Name \t Membership \t Total Spent" << endl;
    for (int i = 0; i < totalusers; i++)
    {
        cout << userid[i] << " \t " << username[i] << " \t " << membership[i] << " \t " << totalspent[i] << endl;
    }
}

// ---------------------------------------------------------------customer functions
void viewallproducts()
{
    system("cls");
    cout << "ID \t Name \t Category \t Age \t Price \t Stock" << endl;
    for (int i = 0; i < totaltoys; i++)
    {
        if (toyname[i] != "")
            cout << toyid[i] << " \t " << toyname[i] << " \t " << category[i] << " \t "
                 << agegroup[i] << " \t " << price[i] << " \t " << stock[i] << endl;
    }
}

void searchbyname()
{
    system("cls");
    cout << "Enter toy name to search: ";
    string searchname;
    cin >> searchname;
    int i = findtoy(searchname);
    if (i == -1)
    {
        cout << "Toy not found." << endl;
        return;
    }
    cout << "Found!" << endl;
    cout << "Name: \t Category: \t Age: \t Price: \t Stock:  " << endl;
    cout << toyname[i] << " \t " << category[i] << " \t " << agegroup[i] << " \t " << price[i] << " \t " << stock[i] << endl;
}

void sortbyprice()
{
    system("cls");
    string name2[100];
    string category2[100];
    float price2[100];
    int stock2[100];
    for (int i = 0; i < totaltoys; i++)
    {
        name2[i] = toyname[i];
        category2[i] = category[i];
        price2[i] = price[i];
        stock2[i] = stock[i];
    }

    for (int i = 0; i < totaltoys; i++)
    {
        for (int j = i+1; j < totaltoys; j++)
        {
            if (price2[i] > price2[j])
            {
                float tempprice = price2[i];
                price2[i] = price2[j];
                price2[j] = tempprice;

                int tempstock = stock2[i];
                stock2[i] = stock2[j];
                stock2[j] = tempstock;

                string tempname = name2[i];
                name2[i] = name2[j];
                name2[j] = tempname;

                string tempcat = category2[i];
                category2[i] = category2[j];
                category2[j] = tempcat;
            }
        }
    }
    cout << "Name \t Category \t Price \t Stock " << endl;
    for (int i = 0; i < totaltoys; i++)
        if (name2[i] != "")
            cout << name2[i] << " \t " << category2[i] << " \t " << price2[i] << " \t " << stock2[i] << endl;
}

void filterbycategory()
{
    system("cls");
    cout << "Categories: Blocks, Doll, Vehicle, Puzzle, Action, Plush, Pretend, Outdoor, Board" << endl;
    cout << "Enter category: ";
    string filtercat;
    cin >> filtercat;
    cout << "Name \t Age \t Price \t Stock " << endl;
    bool any = false;
    for (int i = 0; i < totaltoys; i++)
    {
        if (toyname[i] != "" && category[i] == filtercat)
        {
            cout << toyname[i] << " \t " << agegroup[i] << " \t " << price[i] << " \t " << stock[i] << endl;
            any = true;
        }
    }
    if (any != true)
        cout << "No toys found in this category." << endl;
}

void addtocart()
{
    system("cls");
    cout << "Enter toy name to add to cart: ";
    string searchname;
    cin >> searchname;
    int fi = findtoy(searchname);
    if (fi == -1)
    {
        cout << "Toy not found." << endl;
        return;
    }
    if (stock[fi] == 0)
    {
        cout << "Sorry, This toy is out of stock." << endl;
        return;
    }
    cout << "Price: Rs." << price[fi] << " \t Stock available: " << stock[fi] << endl;
    cout << "Enter quantity: ";
    int quantity;
    cin >> quantity;
    if (quantity <= 0)
    {
        cout << "Invalid quantity." << endl;
        return;
    }
    else if (quantity > stock[fi])
    {
        cout << "Not enough stock. Max available: " << stock[fi] << endl;
        return;
    }
    else
    {
        bool already = false;
        // check for pre-existing items
        for (int i = 0; i < cartcount; i++)
        {
            if (carttoy[i] == fi)
            {
                if (cartquantity[i] + quantity > stock[fi])
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
        if (already != true)
        {
            carttoy[cartcount] = fi;
            cartquantity[cartcount] = quantity;
            cartcount++;
            cout << quantity << "x " << toyname[fi] << " added to cart!" << endl;
        }
    }
}

void viewcart()
{
    system("cls");
    if (cartcount == 0)
    {
        cout << "Your cart is empty." << endl;
    }
    else
    {
        cout << "No. \t Name \t Qty \t Price \t Subtotal" << endl;
        float carttotal = 0;
        for (int i = 0; i < cartcount; i++)
        {
            int idx = carttoy[i];
            float sub = price[idx] * cartquantity[i];
            carttotal += sub;
            cout << i + 1 << " \t " << toyname[idx] << " \t " << cartquantity[i] << " \t " << price[idx] << " \t " << sub << endl;
        }
        cout << "Cart Total: Rs." << carttotal << endl;
        cout << "Enter item number to remove (0 to keep all): ";
        int removenum;
        cin >> removenum;
        if (removenum > 0 && removenum <= cartcount)
        {
            for (int i = removenum - 1; i < cartcount - 1; i++)
            {
                carttoy[i] = carttoy[i + 1];
                cartquantity[i] = cartquantity[i + 1];
            }
            cartcount--;
            cout << "Item removed from cart." << endl;
        }
    }
}

void viewpurchasehistory(int registereduser)
{
    system("cls");
    int cid = userid[registereduser];
    cout << "Purchase History for " << username[registereduser] << endl;
    cout << "Date \t Toy \t Qty \t Amount" << endl;
    int shown = 0;
    for (int i = history - 1; i >= 0 && shown < 10; i--)
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

void viewmembershipstatus(int registereduser)
{
    system("cls");
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

void checkout(int registereduser)
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
            subtotal += price[carttoy[i]] * cartquantity[i];

        float memberdisc = 0;
        if (membership[registereduser] == "Gold")
            memberdisc = subtotal * 0.10;
        else if (membership[registereduser] == "Silver")
            memberdisc = subtotal * 0.05;

        float afterAllDiscounts = subtotal - memberdisc;
        float tax = afterAllDiscounts * 0.05;
        float grandtotal = afterAllDiscounts + tax;

        cout << "Subtotal: Rs." << subtotal << endl;
        cout << "Membership Discount: Rs." << memberdisc << endl;
        cout << "Tax (5%): Rs." << tax << endl;
        cout << "Grand Total: Rs." << grandtotal << endl;
        cout << "Enter today's date (YYYY-MM-DD): ";
        string today;
        cin >> today;
        cout << "Confirm purchase? (yes/no): ";
        string confirm;
        cin >> confirm;

        if (confirm == "yes")
        {
            for (int i = 0; i < cartcount; i++)
            {
                int idx = carttoy[i];

                stock[idx] -= cartquantity[i];
                historyuserid[history] = userid[registereduser];
                historytoyname[history] = toyname[idx];
                historyprice[history] = price[idx];
                historyquantity[history] = cartquantity[i];
                historydate[history] = today;
                history++;

                saledate[totalsales] = today;
                saletoyname[totalsales] = toyname[idx];
                salequantity[totalsales] = cartquantity[i];
                saleamount[totalsales] = price[idx] * cartquantity[i];
                totalsales++;
            }

            totalrevenue += grandtotal;
            totalspent[registereduser] += grandtotal;

            // update membership tier for logged in user
            if (totalspent[registereduser] >= 15000)
                membership[registereduser] = "Gold";
            else if (totalspent[registereduser] >= 8000)
                membership[registereduser] = "Silver";

            cartcount = 0;
            cout << "Purchase successful! Thank you, " << username[registereduser] << "!" << endl;
        }
        else
        {
            cout << "Checkout cancelled." << endl;
        }
    }
}
// -------------------------------------------------------login and menu functions
void adminmenu()
{
    while (true)
    {
        system("cls");
        cout << "           ADMIN PANEL                " << endl;
        cout << "1.  Add New Product" << endl;
        cout << "2.  Update Product Details" << endl;
        cout << "3.  Remove Product" << endl;
        cout << "4.  Restock Inventory" << endl;
        cout << "5.  Sort Inventory by Stock" << endl;
        cout << "6.  View Total Sales History" << endl;
        cout << "7.  Sort Sales by Revenue" << endl;
        cout << "8.  Search Customer History" << endl;
        cout << "9.  User Management" << endl;
        cout << "10. Logout" << endl;
        cout << "Choose Option: ";
        string adminoption;
        cin >> adminoption;
        if (adminoption == "1")
        {
            addproduct();
        }
        else if (adminoption == "2")
        {
            updateproduct();
        }
        else if (adminoption == "3")
        {
            removeproduct();
        }
        else if (adminoption == "4")
        {
            restockinventory();
        }
        else if (adminoption == "5")
        {
            sortinventorybystock();
        }
        else if (adminoption == "6")
        {
            viewsalehistory();
        }
        else if (adminoption == "7")
        {
            sortsalesbyrevenue();
        }
        else if (adminoption == "8")
        {
            searchcustomerhistory();
        }
        else if (adminoption == "9")
        {
                viewallusers();
        }
        else if (adminoption == "10")
        {
            break;
        }
        else
        {
            cout << "Invalid option. Try again." << endl;
        }

        cout << "Press any key to continue...";
        getch();
    }
    cout << "Logged out. Press any key...";
    getch();
}

void adminlogin()
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
            cout << "Press any key to continue..." << endl;
            getch();
            adminmenu();
            return;
        }
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

void customermenu(int registereduser)
{
    cartcount = 0;
    while (true)
    {
        system("cls");
        cout << "  CUSTOMER MENU : " << username[registereduser] << endl;
        cout << "1. View All Products" << endl;
        cout << "2. Search by Name" << endl;
        cout << "3. Sort by Price (Ascending)" << endl;
        cout << "4. Filter by Category" << endl;
        cout << "5. Add to Cart" << endl;
        cout << "6. View / Remove from Cart" << endl;
        cout << "7. View My Purchase History" << endl;
        cout << "8. Membership Status" << endl;
        cout << "9. Checkout" << endl;
        cout << "10. Logout" << endl;
        cout << "Choose Option: ";
        string customeroption;
        cin >> customeroption;
        if (customeroption == "1")
        {
            viewallproducts();
        }
        else if (customeroption == "2")
        {
            searchbyname();
        }
        else if (customeroption == "3")
        {
            sortbyprice();
        }
        else if (customeroption == "4")
        {
            filterbycategory();
        }
        else if (customeroption == "5")
        {
            addtocart();
        }
        else if (customeroption == "6")
        {
            viewcart();
        }
        else if (customeroption == "7")
        {
            viewpurchasehistory(registereduser);
        }
        else if (customeroption == "8")
        {
            viewmembershipstatus(registereduser);
        }
        else if (customeroption == "9")
        {
            checkout(registereduser);
        }
        else if (customeroption == "10")
        {
            cout << "Logged out. Goodbye, " << username[registereduser] << "!" << endl;
            cout << "Press any key to continue..." << endl;
            getch();
            break;
        }
        else
        {
            cout << "Wrong option selected." << endl;
        }
        cout << "Press any key to continue...";
        getch();
    }
}

void customerlogin()
{
    system("cls");
    cout << "Enter your name: ";
    string cname;
    cin >> cname;
    int registereduser = finduser(cname);
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
            return;
        }
    }
    else
    {
        cout << "Welcome, " << username[registereduser] << "! Membership: " << membership[registereduser] << endl;
        cout << "Press Any key to continue..." << endl;
        getch();
    }
    customermenu(registereduser);
}

//--------------------------------------------------------------------- file handling
void loaddata()
{
    fstream file;
    string tempt;
    file.open("toys.txt", ios::in);
    if (file.is_open())
    {
        getline(file, tempt);
        totaltoys = stoi(tempt);
        int i = 0;
        while (!file.eof() && i < totaltoys)
        {
            getline(file, toyid[i]);
            getline(file, toyname[i]);
            getline(file, category[i]);
            getline(file, agegroup[i]);
            getline(file, tempt);
            price[i] = stof(tempt);
            getline(file, tempt);
            stock[i] = stoi(tempt);
            i++;
        }
        file.close();
    }

    string tempu;
    file.open("users.txt", ios::in);
    if (file.is_open())
    {
        getline(file, tempu);
        totalusers = stoi(tempu);
        int i = 0;
        while (!file.eof() && i < totalusers)
        {
            getline(file, tempu);
            userid[i] = stoi(tempu);
            getline(file, username[i]);
            getline(file, membership[i]);
            getline(file, tempu);
            totalspent[i] = stof(tempu);
            i++;
        }
        file.close();
    }

    string temps;
    file.open("sales.txt", ios::in);
    if (file.is_open())
    {
        getline(file, temps);
        totalsales = stoi(temps);
        int i = 0;
        while (!file.eof() && i < totalsales)
        {
            getline(file, saledate[i]);
            getline(file, saletoyname[i]);
            getline(file, temps);
            salequantity[i] = stoi(temps);
            getline(file, temps);
            saleamount[i] = stof(temps);
            i++;
        }
        file.close();
    }

    string temph;
    file.open("history.txt", ios::in);
    if (file.is_open())
    {
        getline(file, temph);
        history = stoi(temph);
        int i = 0;
        while (!file.eof() && i < history)
        {
            getline(file, temph);
            historyuserid[i] = stoi(temph);
            getline(file, historytoyname[i]);
            getline(file, temph);
            historyprice[i] = stof(temph);
            getline(file, temph);
            historyquantity[i] = stoi(temph);
            getline(file, historydate[i]);
            i++;
        }
        file.close();
    }
}

void savedata()
{
    fstream file;
    file.open("toys.txt", ios::app);
    for (int i = 0; i < totaltoys; i++)
    {
        file << toyid[i] << "," << toyname[i] << "," << category[i] << "," << agegroup[i] << "," << price[i] << "," << stock[i] << endl;
    }
    file.close();

    file.open("users.txt", ios::app);
    for (int i = 0; i < totalusers; i++)
    {
        file << userid[i] << "," << username[i] << "," << membership[i]
             << "," << totalspent[i] << endl;
    }
    file.close();

    file.open("sales.txt", ios::app);
    for (int i = 0; i < totalsales; i++)
    {
        file << saledate[i] << "," << saletoyname[i] << "," << salequantity[i]
             << "," << saleamount[i] << endl;
    }
    file.close();

    file.open("history.txt", ios::app);
    for (int i = 0; i < history; i++)
    {
        file << historyuserid[i] << "," << historytoyname[i] << "," << historyprice[i] << "," << historyquantity[i] << "," << historydate[i] << endl;
    }
    file.close();
}