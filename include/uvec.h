#ifndef UNSALTED_UVEC_H
#define UNSALTED_UVEC_H

struct _vec2_f {
    float i;
    float j;
};

union _vec3_f {
    struct {
        float i;
        float j;
        float k;
    };
    struct _vec2_f vec2;
};

union _vec4_f {
    struct {
        float i;
        float j;
        float k;
        float l;
    };
    union _vec3_f vec3;
};

struct _vec2_d {
    double i;
    double j;
};

union _vec3_d {
    struct {
        double i;
        double j;
        double k;
    };
    struct _vec2_d vec2;
};

union _vec4_d {
    struct {
        double i;
        double j;
        double k;
        double l;
    };
    union _vec3_d vec3;
};

typedef struct _vec2_f vec2_f;
typedef union  _vec3_f vec3_f;
typedef union  _vec4_f vec4_f;

typedef struct _vec2_d vec2_d;
typedef union  _vec3_d vec3_d;
typedef union  _vec4_d vec4_d;

#endif //UNSALTED_UVEC_H
