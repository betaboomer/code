import numpy as np

class Polynomial:
    def __init__(self, coeff):
        self.coeff = coeff
        self.degree = len(coeff) - 1

    def __call__(self, x_arr):
        p_x_arr = np.zeros_like(x_arr)
        for i in range(self.degree + 1):
            p_x_arr += self.coeff[i] * (x_arr ** i)
        return p_x_arr

    def __repr__(self):
        str_ret = f'Polynomial of degree {self.degree}\np(x) = '
        for i in range(self.degree + 1):
            a_val = self.coeff[i]
            if i != 0:
                if a_val >= 0:
                    str_ret += f'+ {a_val}x^{i} '
                else:
                    str_ret += f'- {-a_val}x^{i} '
            else:
                str_ret += f'{a_val}x^{i} '
        return str_ret

    def get_degree(self):
        return self.degree

    def get_coeffs(self):
        return self.coeff

# Test case
x_arr = np.array([1, 2, 3, 4, 5])
coeff = np.array([1.0, 0.0, 2.0, 0.0, 5.0])
p = Polynomial(coeff)

results = np.array([8, 89, 424, 1313, 3176])
test = p(x_arr)

np.testing.assert_array_equal(results, test)
