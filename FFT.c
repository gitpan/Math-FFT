/*
 * This file was generated automatically by xsubpp version 1.9508 from the 
 * contents of FFT.xs. Do not edit this file, edit FFT.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "FFT.xs"
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"
#include "FFT.h"


#line 17 "FFT.c"
XS(XS_Math__FFT__cdft)
{
    dXSARGS;
    if (items != 5)
	Perl_croak(aTHX_ "Usage: Math::FFT::_cdft(n, isgn, a, ip, w)");
    {
	int	n = (int)SvIV(ST(0));
	int	isgn = (int)SvIV(ST(1));
	double *	a;
	int *	ip;
	double *	w;

        a = (double *)pack1D(ST(2),'d');

        ip = (int *)pack1D(ST(3),'i');

        w = (double *)pack1D(ST(4),'d');

	_cdft(n, isgn, a, ip, w);
        unpack1D((SV*)ST(2), (void *)a, 'd', 0);
	SvSETMAGIC(ST(2));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT__rdft)
{
    dXSARGS;
    if (items != 5)
	Perl_croak(aTHX_ "Usage: Math::FFT::_rdft(n, isgn, a, ip, w)");
    {
	int	n = (int)SvIV(ST(0));
	int	isgn = (int)SvIV(ST(1));
	double *	a;
	int *	ip;
	double *	w;

        a = (double *)pack1D(ST(2),'d');

        ip = (int *)pack1D(ST(3),'i');

        w = (double *)pack1D(ST(4),'d');

	_rdft(n, isgn, a, ip, w);
        unpack1D((SV*)ST(2), (void *)a, 'd', 0);
	SvSETMAGIC(ST(2));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT__ddct)
{
    dXSARGS;
    if (items != 5)
	Perl_croak(aTHX_ "Usage: Math::FFT::_ddct(n, isgn, a, ip, w)");
    {
	int	n = (int)SvIV(ST(0));
	int	isgn = (int)SvIV(ST(1));
	double *	a;
	int *	ip;
	double *	w;

        a = (double *)pack1D(ST(2),'d');

        ip = (int *)pack1D(ST(3),'i');

        w = (double *)pack1D(ST(4),'d');

	_ddct(n, isgn, a, ip, w);
        unpack1D((SV*)ST(2), (void *)a, 'd', 0);
	SvSETMAGIC(ST(2));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT__ddst)
{
    dXSARGS;
    if (items != 5)
	Perl_croak(aTHX_ "Usage: Math::FFT::_ddst(n, isgn, a, ip, w)");
    {
	int	n = (int)SvIV(ST(0));
	int	isgn = (int)SvIV(ST(1));
	double *	a;
	int *	ip;
	double *	w;

        a = (double *)pack1D(ST(2),'d');

        ip = (int *)pack1D(ST(3),'i');

        w = (double *)pack1D(ST(4),'d');

	_ddst(n, isgn, a, ip, w);
        unpack1D((SV*)ST(2), (void *)a, 'd', 0);
	SvSETMAGIC(ST(2));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT_pdfct)
{
    dXSARGS;
    if (items != 6)
	Perl_croak(aTHX_ "Usage: Math::FFT::pdfct(nt, n, a, t, ip, w)");
    {
	int	nt = (int)SvIV(ST(0));
	int	n = (int)SvIV(ST(1));
	double *	a;
	double *	t;
	int *	ip;
	double *	w;

        a = (double *)pack1D(ST(2),'d');

        t = (double *)pack1D(ST(3),'d');

        ip = (int *)pack1D(ST(4),'i');

        w = (double *)pack1D(ST(5),'d');
#line 59 "FFT.xs"
    coerce1D( (SV*) ST(3), nt);
    t = (double *) pack1D( (SV*) ST(3), 'd');
    _dfct(n, a, t, ip, w);
#line 142 "FFT.c"
        unpack1D((SV*)ST(2), (void *)a, 'd', 0);
	SvSETMAGIC(ST(2));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT_pdfst)
{
    dXSARGS;
    if (items != 6)
	Perl_croak(aTHX_ "Usage: Math::FFT::pdfst(nt, n, a, t, ip, w)");
    {
	int	nt = (int)SvIV(ST(0));
	int	n = (int)SvIV(ST(1));
	double *	a;
	double *	t;
	int *	ip;
	double *	w;

        a = (double *)pack1D(ST(2),'d');

        ip = (int *)pack1D(ST(4),'i');

        w = (double *)pack1D(ST(5),'d');
#line 74 "FFT.xs"
    coerce1D( (SV*) ST(3), nt);
    t = (double *) pack1D( (SV*) ST(3), 'd');
    _dfst(n, a, t, ip, w);
#line 171 "FFT.c"
        unpack1D((SV*)ST(2), (void *)a, 'd', 0);
	SvSETMAGIC(ST(2));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT__correl)
{
    dXSARGS;
    if (items != 6)
	Perl_croak(aTHX_ "Usage: Math::FFT::_correl(n, corr, d1, d2, ip, w)");
    {
	int	n = (int)SvIV(ST(0));
	double *	corr;
	double *	d1;
	double *	d2;
	int *	ip;
	double *	w;
#line 89 "FFT.xs"
    int i;
#line 192 "FFT.c"

        d1 = (double *)pack1D(ST(2),'d');

        d2 = (double *)pack1D(ST(3),'d');

        ip = (int *)pack1D(ST(4),'i');

        w = (double *)pack1D(ST(5),'d');
#line 91 "FFT.xs"
    coerce1D( (SV*) ST(1), n);
    corr = (double *) pack1D( (SV*) ST(1), 'd');
    corr[0] = d1[0]*d2[0];
    corr[1] = d1[1]*d2[1];
    for (i=2; i<n; i+=2) {
	corr[i] = d1[i]*d2[i]+ d1[i+1]*d2[i+1];
	corr[i+1] = d1[i+1]*d2[i] - d1[i]*d2[i+1];
    }
    _rdft(n, -1, corr, ip, w);
    for (i=0; i<n; i++) corr[i] *= 2.0/n;
#line 212 "FFT.c"
        unpack1D((SV*)ST(1), (void *)corr, 'd', 0);
	SvSETMAGIC(ST(1));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT__convlv)
{
    dXSARGS;
    if (items != 6)
	Perl_croak(aTHX_ "Usage: Math::FFT::_convlv(n, convlv, d1, d2, ip, w)");
    {
	int	n = (int)SvIV(ST(0));
	double *	convlv;
	double *	d1;
	double *	d2;
	int *	ip;
	double *	w;
#line 113 "FFT.xs"
    int i;
#line 233 "FFT.c"

        d1 = (double *)pack1D(ST(2),'d');

        d2 = (double *)pack1D(ST(3),'d');

        ip = (int *)pack1D(ST(4),'i');

        w = (double *)pack1D(ST(5),'d');
#line 115 "FFT.xs"
    coerce1D( (SV*) ST(1), n);
    convlv = (double *) pack1D( (SV*) ST(1), 'd');
    _rdft(n, 1, d2, ip, w);
    convlv[0] = d1[0]*d2[0];
    convlv[1] = d1[1]*d2[1];
    for (i=2; i<n; i+=2) {
	convlv[i] = d1[i]*d2[i]- d1[i+1]*d2[i+1];
	convlv[i+1] = d1[i+1]*d2[i] + d1[i]*d2[i+1];
    }
    _rdft(n, -1, convlv, ip, w);
    for (i=0; i<n; i++) convlv[i] *= 2.0/n;
#line 254 "FFT.c"
        unpack1D((SV*)ST(1), (void *)convlv, 'd', 0);
	SvSETMAGIC(ST(1));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT__deconvlv)
{
    dXSARGS;
    if (items != 6)
	Perl_croak(aTHX_ "Usage: Math::FFT::_deconvlv(n, convlv, d1, d2, ip, w)");
    {
	int	n = (int)SvIV(ST(0));
	double *	convlv;
	double *	d1;
	double *	d2;
	int *	ip;
	double *	w;
#line 139 "FFT.xs"
    int i;
    double mag;
#line 276 "FFT.c"
	int	RETVAL;
	dXSTARG;

        d1 = (double *)pack1D(ST(2),'d');

        d2 = (double *)pack1D(ST(3),'d');

        ip = (int *)pack1D(ST(4),'i');

        w = (double *)pack1D(ST(5),'d');
#line 142 "FFT.xs"
    coerce1D( (SV*) ST(1), n);
    convlv = (double *) pack1D( (SV*) ST(1), 'd');
    _rdft(n, 1, d2, ip, w);
    RETVAL=0;
    if (fabs((float)d2[0])<1.e-10  || fabs((float)d2[1])<1.e-10) {
       RETVAL=1;
    }
    else {
      convlv[0] = d1[0]/d2[0];
      convlv[1] = d1[1]/d2[1];
      for (i=2; i<n; i+=2) {
       	mag = d2[i]*d2[i] + d2[i+1]*d2[i+1];
	if (mag < 1.0e-10) {
           RETVAL =1;
           break;
        }	  
	convlv[i] = (d1[i]*d2[i]+ d1[i+1]*d2[i+1])/mag;
	convlv[i+1] = (d1[i+1]*d2[i] - d1[i]*d2[i+1])/mag;
      }
      if (RETVAL == 0) {
        _rdft(n, -1, convlv, ip, w);
        for (i=0; i<n; i++) convlv[i] *= 2.0/n;
      }
    }
#line 312 "FFT.c"
        unpack1D((SV*)ST(1), (void *)convlv, 'd', 0);
	SvSETMAGIC(ST(1));
	XSprePUSH; PUSHi((IV)RETVAL);
    }
    XSRETURN(1);
}

XS(XS_Math__FFT__spctrm)
{
    dXSARGS;
    if (items != 7)
	Perl_croak(aTHX_ "Usage: Math::FFT::_spctrm(n, spctrm, data, ip, w, n2, flag)");
    {
	int	n = (int)SvIV(ST(0));
	double *	spctrm;
	double *	data;
	int *	ip;
	double *	w;
	int	n2 = (int)SvIV(ST(5));
	int	flag = (int)SvIV(ST(6));
#line 180 "FFT.xs"
    int i;
#line 335 "FFT.c"

        data = (double *)pack1D(ST(2),'d');

        ip = (int *)pack1D(ST(3),'i');

        w = (double *)pack1D(ST(4),'d');
#line 182 "FFT.xs"
    coerce1D( (SV*) ST(1), n/2+1);
    spctrm = (double *) pack1D( (SV*) ST(1), 'd');
    if (flag == 1) _rdft(n, 1, data, ip, w);
    spctrm[0] = data[0]*data[0] / n2;
    spctrm[n/2] = data[1]*data[1] / n2;
    for (i=1; i<n/2; i++) {
      spctrm[i] = 2*(data[2*i]*data[2*i]+ data[2*i+1]*data[2*i+1])/n2;
    }
#line 351 "FFT.c"
        unpack1D((SV*)ST(1), (void *)spctrm, 'd', 0);
	SvSETMAGIC(ST(1));
    }
    XSRETURN_EMPTY;
}

XS(XS_Math__FFT__spctrm_bin)
{
    dXSARGS;
    if (items != 8)
	Perl_croak(aTHX_ "Usage: Math::FFT::_spctrm_bin(k, m, spctrm, data, ip, w, n2, tmp)");
    {
	int	k = (int)SvIV(ST(0));
	int	m = (int)SvIV(ST(1));
	double *	spctrm;
	double2D *	data;
	int *	ip;
	double *	w;
	double	n2 = (double)SvNV(ST(6));
	double *	tmp;
#line 204 "FFT.xs"
     int i, j, n;
     double den = 0.0;
#line 375 "FFT.c"

        data = (double2D *)pack2D(ST(3),'d');

        ip = (int *)pack1D(ST(4),'i');

        w = (double *)pack1D(ST(5),'d');
#line 207 "FFT.xs"
    coerce1D( (SV*) ST(2), m/2+1);
    spctrm = (double *) pack1D( (SV*) ST(2), 'd');
    coerce1D( (SV*) ST(7), m);
    tmp = (double *) pack1D( (SV*) ST(7), 'd');
    for(i=0; i<k*m; i+=m) {
      for (j=0; j<m; j++) tmp[j] = data[i+j];
      _rdft(m, 1, tmp, ip, w);   
      spctrm[0] += tmp[0]*tmp[0];
      spctrm[m/2] += tmp[1]*tmp[1];
      den += n2;
      for (n=1; n<m/2; n++)
        spctrm[n] += 2*(tmp[2*n]*tmp[2*n]+ tmp[2*n+1]*tmp[2*n+1]);
    }
    den *= m;
    for (j=0; j<=m/2; j++) spctrm[j] /= den;
#line 398 "FFT.c"
        unpack1D((SV*)ST(2), (void *)spctrm, 'd', 0);
	SvSETMAGIC(ST(2));
    }
    XSRETURN_EMPTY;
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_Math__FFT)
{
    dXSARGS;
    char* file = __FILE__;

    XS_VERSION_BOOTCHECK ;

        newXS("Math::FFT::_cdft", XS_Math__FFT__cdft, file);
        newXS("Math::FFT::_rdft", XS_Math__FFT__rdft, file);
        newXS("Math::FFT::_ddct", XS_Math__FFT__ddct, file);
        newXS("Math::FFT::_ddst", XS_Math__FFT__ddst, file);
        newXS("Math::FFT::pdfct", XS_Math__FFT_pdfct, file);
        newXS("Math::FFT::pdfst", XS_Math__FFT_pdfst, file);
        newXS("Math::FFT::_correl", XS_Math__FFT__correl, file);
        newXS("Math::FFT::_convlv", XS_Math__FFT__convlv, file);
        newXS("Math::FFT::_deconvlv", XS_Math__FFT__deconvlv, file);
        newXS("Math::FFT::_spctrm", XS_Math__FFT__spctrm, file);
        newXS("Math::FFT::_spctrm_bin", XS_Math__FFT__spctrm_bin, file);
    XSRETURN_YES;
}

