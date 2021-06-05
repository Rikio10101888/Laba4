#pragma once
#ifndef SVG_H_INCLUDED
#define SVG_H_INCLUDED

#include <vector>
#include<string>
void
svg_begin(double width, double height);
void
svg_end();
void
svg_text(double left, double baseline, string text);
void svg_rect(double x, double y, double width, double height,
    string stroke="black", string fill="blue");
void
show_histogram_svg(const vector<size_t>& bins);
//string
//fill01(size_t bin,size_t max_count);

#endif // SVG_H_INCLUDED
