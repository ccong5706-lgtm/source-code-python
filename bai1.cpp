#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ====================== CẤU TRÚC DỰ ÁN ======================
struct DuAn
{
    char ten;
    int thoiGian;
    int doanhThu;
};

// ====================== HÀM SO SÁNH ======================
// Sắp xếp theo doanh thu giảm dần
bool sapXep(DuAn a, DuAn b)
{
    return a.doanhThu > b.doanhThu;
}

// ====================== MAIN ======================
int main()
{
    cout << "Cac du an duoc chon:\n" << endl;

    // Danh sách dự án
    vector<DuAn> ds =
    {
        {'A', 4, 70},
        {'B', 1, 80},
        {'C', 1, 30},
        {'D', 2, 100},
        {'E', 3, 20}
    };

    // Sắp xếp giảm dần theo doanh thu
    sort(ds.begin(), ds.end(), sapXep);

    int tongThoiGian = 0;
    int tongDoanhThu = 0;

    // ====================== IN KẾT QUẢ ======================
    for (int i = 0; i < 4; i++)
    {
        cout << ds[i].ten
             << " | Thoi gian: "
             << ds[i].thoiGian
             << " thang | Doanh thu: "
             << ds[i].doanhThu
             << endl;

        tongThoiGian += ds[i].thoiGian;
        tongDoanhThu += ds[i].doanhThu;
    }

    cout << "\nTong thoi gian: "
         << tongThoiGian
         << " thang" << endl;

    cout << "Doanh thu cao nhat dat duoc: "
         << tongDoanhThu
         << endl;

    cout << "\n-----------------------------------\n";

    system("pause");

    return 0;
}