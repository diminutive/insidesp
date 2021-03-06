% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/inside_sp.R
\name{inside_sp}
\alias{inside_sp}
\title{Inside the sp way}
\usage{
inside_sp(pts, coords)
}
\arguments{
\item{pts}{matrix of points 2 columns x,y}

\item{coords}{matrix of polygon ring 2 columns x,y}
}
\value{
integer vector of point in polygon status, see Details
}
\description{
Call the O'Rourke InPoly function with the R C API, as in the sp package.
}
\details{
For each query point 'pts', returns one of the following relative to P 'coords':
0 : is strictly interior to P
1 : is strictly exterior to P
3 : is a vertex of P
2 : lies on the relative interior of an edge of P
}
\examples{
inside_sp(matrix(runif(10), ncol = 2), cbind(c(0, .5, .5, 0, 0), c(0, 0, .5, 0, 0)))
}
