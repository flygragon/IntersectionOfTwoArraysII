#pragma once
#include<vector>
#include<algorithm>
using namespace std;
class Intersection {
public:
	vector<int> getIntersect(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		vector<int> result;
		for (int i = 0, j = 0, len1 = nums1.size(), len2 = nums2.size();
			i <len1 && j <len2;) {
			while (i <len1 && nums1[i] <nums2[j])
				i++;
			if (i == len1) break;
			while (j <len2 && nums2[j] <nums1[i])
				j++;
			while (i <len1 && j <len2 && nums1[i] == nums2[j])
				result.push_back(nums1[i]), i++, j++;
		}
		return result;
	}
};