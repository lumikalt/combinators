#define fn auto

namespace combinators {

fn bluebird = [](fn a, fn b) {
    return [=](auto&& c) {
        return a(b(c));
    };
};

fn blackbird = [](fn a, fn b) {
    return [=](auto&& c, auto&& d) {
        return a(b(c, d));
    };
};

fn bunting = [](fn a, fn b) {
    return [=](auto&& c, auto&& d, auto&& e) {
        return a(b(c, d, e));
    };
};

fn becard = [](fn a, fn b, fn c) {
    return [=](auto&& d) {
        return a(b(c(d)));
    };
};

fn cardinal = [](fn a) {
    return [=](auto&& b, auto&& c) {
        return a(c, b);
    };
};

fn dove = [](fn a, fn c) {
    return [=](auto&& b, auto&& d) {
        return a(b, c(d));
    };
};

fn dickcissel = [](fn a, fn d) {
    return [=](auto&& b, auto&& c, auto&& e) {
        return a(b, c, d(e));
    };
};

fn dovekies = [](fn a, fn b, fn d) {
    return [=](auto&& c, auto&& e) {
        return a(b(c), d(e));
    };
};

fn eagle = [](fn a, fn c) {
    return [=](auto&& b, auto&& d, auto&& e) {
        return a(b, c(d, e));
    };
};

fn bald_eagle = [](fn a, fn d, fn e) {
    return [=](auto&& b, auto&& c, auto&& f, auto&& g) {
        return a(b(c, d), e(f, g));
    };
};

fn finch = [](fn c) {
    return [=](auto&& a, auto&&b) {
        return c(b, a);
    };
};

fn goldfinch = [](fn a, fn b) {
    return [=](auto&& c, auto&& d) {
        return a(d, b(c));
    };
};

fn hummingbird = [](fn a) {
    return [=](auto&& b, auto&&c) {
        return a(b, c, b);
    };
};

fn idiot = [](auto&& a) {
    return a;
};

fn jay = [](fn a) {
    return [=](auto&& b, auto&& c, auto&& d) {
        return a(b, a(d, c));
    };
};

fn kestrel = [](auto&& a, auto&& b) {
    return a;
};

fn kite = [](auto&& a, auto&& b) {
    return b;
};

fn lark = [](fn a, fn b) {
    return [=](auto&& x) {
        return a(b(b(x)));
    };
};

fn mockingbird = [](fn a) {
    return [=](auto&& x) {
        return a(a(x));
    };
};

fn double_mockingbird = [](fn a) {
    return [=](auto&& b) {
        return a(b, a(b));
    };
};

fn owl = [](fn a, fn b) {
    return [=](auto&& x) {
        return b(a(b(x)));
    };
};

fn omega = []() {};

fn phoenix = [](fn a, fn b, fn c) {
    return [=](auto&& x) {
        return b(a(x), c(x));
    };
};

fn psi = []() {};

fn queer = []() {};

fn theta = []() {};



fn _b  = bluebird;
fn _b1 = blackbird;
fn _b2 = bunting;
fn _b3 = becard;
fn _c  = cardinal;
fn _d  = dove;
fn _d1 = dovekies;
fn _e  = eagle;
fn _e1 = bald_eagle;
fn _f  = finch;
fn _g  = goldfinch;
fn _h  = hummingbird;
fn _i  = idiot;
fn _j  = jay;
fn _k  = kestrel;
fn _ki = kite;
fn _l  = lark;
fn _m  = mockingbird;
fn _m2 = double_mockingbird;
fn _o  = owl;


}
