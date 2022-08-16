#pragma once
#define fn auto

namespace combinators {

// λab.ab
fn apply = [](fn a) {
    return [=](auto&& b) {
        return a(b);
    };
};


// λabc.a(bc)
fn bluebird = [](fn a, fn b) {
    return [=](auto&& c) {
        return a(b(c));
    };
};

// λabcd.a(bcd)
fn blackbird = [](fn a, fn b) {
    return [=](auto&& c, auto&& d) {
        return a(b(c, d));
    };
};

// λabcde.a(bcde)
fn bunting = [](fn a, fn b) {
    return [=](auto&& c, auto&& d, auto&& e) {
        return a(b(c, d, e));
    };
};

// λabcd.a(c(cd))
fn becard = [](fn a, fn b, fn c) {
    return [=](auto&& d) {
        return a(b(c(d)));
    };
};

// λabc.acb
fn cardinal = [](fn a) {
    return [=](auto&& b, auto&& c) {
        return a(c, b);
    };
};

// λabcd.ab(cd)
fn dove = [](fn a, fn c) {
    return [=](auto&& b, auto&& d) {
        return a(b, c(d));
    };
};

// λabcde.abc(de)
fn dickcissel = [](fn a, fn d) {
    return [=](auto&& b, auto&& c, auto&& e) {
        return a(b, c, d(e));
    };
};

// λabcde.a(bc)(de)
fn dovekies = [](fn a, fn b, fn d) {
    return [=](auto&& c, auto&& e) {
        return a(b(c), d(e));
    };
};

// λabcde.ab(cde)
fn eagle = [](fn a, fn c) {
    return [=](auto&& b, auto&& d, auto&& e) {
        return a(b, c(d, e));
    };
};

// λabcdefg.a(bcd)(efg)
fn bald_eagle = [](fn a, fn d, fn e) {
    return [=](auto&& b, auto&& c, auto&& f, auto&& g) {
        return a(b(c, d), e(f, g));
    };
};

// λabc.cba
fn finch = [](fn c) {
    return [=](auto&& a, auto&&b) {
        return c(b, a);
    };
};

// λabcd.ad(bc)
fn goldfinch = [](fn a, fn b) {
    return [=](auto&& c, auto&& d) {
        return a(d, b(c));
    };
};

// λabc.abcb
fn hummingbird = [](fn a) {
    return [=](auto&& b, auto&&c) {
        return a(b, c, b);
    };
};

// λa.a
fn idiot = [](auto&& a) {
    return a;
};

// λabcd.ab(adc)
fn jay = [](fn a) {
    return [=](auto&& b, auto&& c, auto&& d) {
        return a(b, a(d, c));
    };
};

// λab.a
fn kestrel = [](auto&& a, auto&& b) {
    return a;
};

// λab.b
fn kite = [](auto&& a, auto&& b) {
    return b;
};

// λab.a(bb)
fn lark = [](fn a, fn b) {
    return [=](auto&& x) { // :(
        return a(b(b(x)));
    };
};

// λa.aa
fn mockingbird = [](fn a) {
    return [=](auto&& x) { // :(
        return a(a(x));
    };
};

// λab.ab(ab)
fn double_mockingbird = [](fn a) {
    return [=](auto&& b) {
        return a(b, a(b));
    };
};

// λab.b(ab)
fn owl = [](fn a, fn b) {
    return [=](auto&& x) { //:(
        return b(a(b(x)));
    };
};

/*
// λa.aa(aa)
// This is the `infinite recursion`
// combinator, worthless for real code
fn omega = []() {};
*/

// λabc.b(a, c)
fn phoenix = [](fn a, fn b, fn c) {
    return [=](auto&& x) {
        return b(a(x), c(x));
    };
};
// Could technically think of a and c as
// values themselves... alas.

// λabcd.a(bc)(bd)
fn psi = [](fn a, fn b) {
    return [=](auto&& c, auto&& d) {
        return a(b(c), b(d));
    };
};

fn queer = []() {};

fn theta = []() {};



fn _b   = bluebird;
fn _b1  = blackbird;
fn _b2  = bunting;
fn _b3  = becard;
fn _c   = cardinal;
fn _d   = dove;
fn _d1  = dovekies;
fn _e   = eagle;
fn _e1  = bald_eagle;
fn _f   = finch;
fn _g   = goldfinch;
fn _h   = hummingbird;
fn _i   = idiot;
fn _j   = jay;
fn _k   = kestrel;
fn _ki  = kite;
fn _l   = lark;
fn _m   = mockingbird;
fn _m2  = double_mockingbird;
fn _o   = owl;
fn _phi = phoenix;
fn _psi = psi;
//fn _om  = omega;
} // namespace combinators
