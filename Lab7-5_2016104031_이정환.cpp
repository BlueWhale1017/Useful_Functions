#include<iostream>
#include<cmath>
#define Pi 3.14
using namespace std;

struct rect {
	double x;
	double y;
};

struct polar {
	double distance;
	double angle;
};//structures 

rect polar_to_rect(polar* p);
polar rect_to_polar(rect* r); //prototypes 

int main() {
	rect A; //double A;
	polar B; //int B;

	cout << "x y ��ǥ�� �Է��ϼ���: ";
	cin >> A.x >> A.y; //�Է�
	B = rect_to_polar(&A); //A�� �ּҰ��� �Լ��� �ְ� ����� B�� ����. 

	cout << "angle: "<< B.angle << ' ' <<"distance: "<< B.distance << endl; //B�� ���� �Ÿ��� ���. 
	

	rect C;
	polar D;
	cout << "distance �� angle �� �Է��ϼ���: "; 
	cin >> D.distance >> D.angle; //B�� �ʱ�ȭ ��Ű�鼭 �Է�. 
	C = polar_to_rect(&D); //B�� �ּҰ��� �Լ��� �ְ� ����� A�� ����. 

	cout << "x: " << C.x << ' ' << "y: " << C.y << endl;

	return 0;
}

rect polar_to_rect(polar* p) {
	rect r;
	r.x = p->distance * cos((p->angle)*Pi/180);
	r.y = p->distance * (sin((p->angle)*Pi/180));
	return r;
}
polar rect_to_polar(rect* r) {
	polar p;
	p.angle = atan2(r->y, r->x)*180/Pi;
	p.distance = sqrt(pow(r->x, 2) + pow(r->y, 2));
	return p;
}
/*
#include<iostream>
#include<cmath>
using namespace std;

struct rect {
	double x;
	double y;
};

struct polar {
	double distance;
	double angle;
};//structures 

rect polar_to_rect(polar* p);
polar rect_to_polar(rect* r); //prototypes 

int main() {
	rect* A = new rect;
	polar* B = new polar;

	cout << "x y ��ǥ�� �Է��ϼ���: ";
	cin >> A->x >> A->y;

	*B = rect_to_polar(A);
	cout << B->angle << ' ' << B->distance << endl;;
	*A = polar_to_rect(B);
	cout << A->x << ' ' << A->y;

	delete A, B;
	return 0;
}

rect polar_to_rect(polar* p) {
	rect r;
	r.x = p->distance * cos(p->angle);
	r.y = p->distance * sin(p->angle);
	return r;
}
polar rect_to_polar(rect* r) {
	polar p;
	p.angle = atan2(r->y, r->x);
	p.distance = sqrt(pow(r->x, 2) + pow(r->y, 2));
	return p;
}

/*#include<iostream>
#include<cmath>
using namespace std;

struct rect {
	double x;
	double y;
};

struct polar {
	double distance;
	double angle;
};//structures 

rect polar_to_rect(polar* p);
polar rect_to_polar(rect* r); //prototypes 

int main() {
	double x = 0;
	double y = 0;
	double distance = 0;
	double	angle = 0;

	cout << "x y ��ǥ�� �Է��ϼ���: ";
	cin >> x >> y;
	cout << "distance, angle�� �Է��ϼ���: ";
	cin >> distance >> angle;

	rect polar_to_rect(polar* p);
	polar rect_to_polar(rect* r);

	return 0;
}

rect polar_to_rect(polar* p) {
	double x=cos(p->angle)*(p->distance);
	double y=sin(p->angle)*(p->distance);

	

}
polar rect_to_polar(rect* r) {
	double distance = sqrt(pow(r->x, 2) + (r->y, 2));
	double angle = atan2(r->y, r->x);

}

*/