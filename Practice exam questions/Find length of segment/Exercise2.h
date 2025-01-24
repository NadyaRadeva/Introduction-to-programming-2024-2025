#ifndef EXERCISE2
#define EXERCISE2

struct Vector {
	double x1, y1;
	double x2, y2;
};

double commonSegmentLength(const Vector& vec1, const Vector& vec2) {
    if (vec1.x1 == vec1.x2 && vec2.x1 == vec2.x2) {
        if (vec1.x1 != vec2.x1) {
            return -1;
        }

        double vec1Start = (vec1.y1 < vec1.y2) ? vec1.y1 : vec1.y2;
        double vec1End = (vec1.y1 > vec1.y2) ? vec1.y1 : vec1.y2;
        double vec2Start = (vec2.y1 < vec2.y2) ? vec2.y1 : vec2.y2;
        double vec2End = (vec2.y1 > vec2.y2) ? vec2.y1 : vec2.y2;

        double overlapStart = (vec1Start > vec2Start) ? vec1Start : vec2Start;
        double overlapEnd = (vec1End < vec2End) ? vec1End : vec2End;

        if (overlapStart < overlapEnd) {
            return overlapEnd - overlapStart;
        }
        else {
            return 0;
        }
    }

    if (vec1.y1 == vec1.y2 && vec2.y1 == vec2.y2) {
        if (vec1.y1 != vec2.y1) {
            return -1;
        }
        double vec1Start = (vec1.x1 < vec1.x2) ? vec1.x1 : vec1.x2;
        double vec1End = (vec1.x1 > vec1.x2) ? vec1.x1 : vec1.x2;
        double vec2Start = (vec2.x1 < vec2.x2) ? vec2.x1 : vec2.x2;
        double vec2End = (vec2.x1 > vec2.x2) ? vec2.x1 : vec2.x2;

        double overlapStart = (vec1Start > vec2Start) ? vec1Start : vec2Start;
        double overlapEnd = (vec1End < vec2End) ? vec1End : vec2End;

        if (overlapStart < overlapEnd) {
            return overlapEnd - overlapStart;
        }
        else {
            return 0;
        }
    }

    return -1;
}

#endif // !EXERCISE2
