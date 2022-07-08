import numpy as np

def pnjlim(vnew, vold, vt, vcrit):
    icheck = 0
    if ((vnew > vcrit) and (abs(vnew - vold) > (vt + vt))):
        if (vold > 0):
            arg = 1 + (vnew - vold) / vt

            vnew = vold + vt * np.log(arg) if (arg > 0) else vcrit
        else:
            vnew = vt *np.log(vnew/vt)
        icheck = 1

    return(vnew, icheck)
