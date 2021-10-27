#' Title
#'
#' @param pts
#' @param coords
#'
#' @return
#' @export
#'
#' @examples
inside_sp <- function(pts, coords) {
  .Call(point_in_polygon_old_sp, pts[,1], pts[,2], coords[,1], coords[,2],
      PACKAGE = "insidesp")
}
